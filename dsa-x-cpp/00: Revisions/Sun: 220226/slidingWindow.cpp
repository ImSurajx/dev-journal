// Problem: Given an array of integers, find the maximum sum of any subarray of size k.
// nums = [2,1,5,1,3,2], k = 3
// Output: 9
// Explanation: [5,1,3]
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int maxSumSubArray(vector<int> &v, int k)
{
    if (v.size() < k)
    {
        return 0;
    }
    else
    {
        // sliding window: building first widow
        int sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum += v[i];
        }
        int maxSum = sum;
        int i = k;
        // slidin windwo: implement window logic
        while (i < v.size())
        {
            sum -= v[i - k];
            sum += v[i];
            if (maxSum < sum)
            {
                maxSum = sum;
            }
            i++;
        }
        return maxSum;
    }
}

int main()
{
    vector<int> nums = {2, 1, 5, 1, 3, 2};
    int k = 3;
    int maxSum = maxSumSubArray(nums, k);
    cout << "sum of max of subarray is: " << maxSum << endl;
    return 0;
}
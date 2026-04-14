/*
Given an integer array nums and an integer k, split nums into k non-empty subarrays such that the largest sum of any subarray is minimized. Return the minimized largest sum of the split.A subarray is a contiguous part of the array.
*/
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int subarray(vector<int> &nums, int mid)
{
    int count = 1;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (sum + nums[i] <= mid)
        {
            sum += nums[i];
        }
        else
        {
            count++;
            sum = 0;
            sum += nums[i];
        }
    }
    return count;
}
int splitArray(vector<int> &nums, int k)
{
    int low = *max_element(nums.begin(), nums.end());
    int high = accumulate(nums.begin(), nums.end(), 0);
    int ans = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int sub = subarray(nums, mid);
        if (sub <= k)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> time = {7, 2, 5, 10, 8};
    int totalMaxSum = splitArray(time, 2);
    cout << "total maximum sum if we split our array in k times: " << totalMaxSum << endl;
    return 0;
}
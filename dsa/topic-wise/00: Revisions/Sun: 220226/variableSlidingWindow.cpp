// problem: find the length of longest subarray whose sum <= k.
#include <iostream>
using namespace std;
int longestSubarrayWithSumLessEqualK(vector<int> &nums, int k)
{
    int left = 0;
    int currentSum = 0;
    int maxLength = 0;
    for (int right = 0; right < nums.size(); right++)
    {
        currentSum += nums[right];
        while (currentSum > k)
        {
            currentSum -= nums[left];
            left++;
        }

        maxLength = max(maxLength, right - left + 1);
    }
    return maxLength;
}
int main()
{
    vector<int> nums = {4, 2, 1, 7, 8, 1, 2, 8, 1, 0};
    int k = 8;
    int length = longestSubarrayWithSumLessEqualK(nums, k);
    cout << "longest subarray with sum less equal to k: " << length << endl;
    return 0;
}
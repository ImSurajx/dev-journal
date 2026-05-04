#include <iostream>
using namespace std;
int lowerBound(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    int ans = nums.size();
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] >= target)
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
int maximumCount(vector<int> &nums)
{
    int firstPositive = lowerBound(nums, 1);
    int firstZero = lowerBound(nums, 0);
    int negativeCount = firstZero;
    int positiveCount = nums.size() - firstPositive;
    return max(negativeCount, positiveCount);
}
int main()
{
    vector<int> nums = {-3, -2, -1, 0, 0, 1, 2};
    int max = maximumCount(nums);
    cout << "maximum number are: " << max << endl;
    return 0;
}
// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
// inclusive in sorted order.
// There is only one repeated number in nums, return this repeated number.
// Input 1: arr[] = {1,2,3,3,4}
// Output 1: 3
// Input 2: arr[] = {1,2,2,3,4,5}
// Output 2: 2
#include <iostream>
using namespace std;
int findDuplicate(vector<int> &nums)
{
    int low = 1;                // minimum value of whole series
    int high = nums.size() - 1; // highest value of whole series
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] <= mid)
            {
                count++;
            }
        }
        if (count > mid)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}
int main()
{
    vector<int> nums = {1, 2, 3, 3, 4};
    cout << "duplicate value is: " << findDuplicate(nums) << endl;
    return 0;
}
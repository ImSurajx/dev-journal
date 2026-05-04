// ques: there is an array nums sorted in non-decreasing order not necessarily with distinct values.
// before being passed to your function, nums is rotated at an unknown pivot index k(0 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], nums[k+1],...., nums[n-1], nums[0], nums[1]...., nums[k-1]], (0-indexed). for example [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become [4,5,6,6,7,0,1,2,4,4].
// given the array nums after the rotation and an integer target, return true if target is in nums or false if it's not in nums.
// you must decrease the overall operation steps as much as possibles. // leetcode 81
#include <iostream>
using namespace std;
bool findTarget(vector<int> &nums, int target)
{
    // there are two ways of solving these question
    // - one is find pivot & divide array in parts like one from pivot index to end & one is pivot before -> wrong method (mulitiple conditions)
    // - second one is find mid check our belong from which range according to that reduce the size of array
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            return true;
        }
        else if (nums[mid] == nums[low] && nums[mid] == nums[high])
        {
            // if nums[low] == nums[high] that mean our binary search in not going to work so make it work we move our index manually.
            low++;
            high--;
        }
        else if (nums[low] <= nums[mid])
        {
            if (nums[low] <= target && target < nums[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (target > nums[mid] && target <= nums[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return false;
}
int main()
{
    vector<int> nums = {4, 5, 6, 6, 7, 0, 1, 2, 4, 4};
    bool flag = findTarget(nums, 0);
    cout << "target is present: " << flag << endl;
    return 0;
}
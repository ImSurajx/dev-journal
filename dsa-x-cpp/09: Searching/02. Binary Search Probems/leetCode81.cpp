// ques: search in rotated sorted array, array contains duplicate elements
#include <iostream>
using namespace std;
int search(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
            return mid;
        // if all element are same that mean we lost our power of binary search so to gain that power again on all point if element are same we will move our low or high pointer
        else if (nums[low] == nums[mid] && nums[mid] == nums[high])
        {
            low++;
            high--;
        }
        // right part of array is sorted
        else if (nums[mid] <= nums[high])
        {
            // check is target value belong to the right part of array or not?
            if (target >= nums[mid] && target <= nums[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        // this mean left part is sorted in the array
        else
        {
            // check is target value belong to the left part of array or not?
            if (target >= nums[low] && target < nums[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {4, 5, 6, 7, 8, 0, 0, 0, 1, 2};
    int getElementIdx = search(nums, 6);
    cout << "the element found at idx: " << getElementIdx << endl;
    return 0;
}
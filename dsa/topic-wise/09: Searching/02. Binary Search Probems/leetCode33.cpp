// ques: search in rotated sorted array
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
        else if (nums[mid] <= nums[high])
        {
            // right part of array is sorted
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
        else
        {
            // this mean left part is sorted in the array
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
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int getElementIdx = search(nums, 0);
    cout << "the element found at idx: " << getElementIdx << endl;
    return 0;
}
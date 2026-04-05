// ques: given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’ does not exist return -1.
#include <iostream>
using namespace std;
int lastOccurance(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (nums[mid] > target)
        {
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
    vector<int> nums = {1, 2, 3, 3, 4, 4, 4, 5};
    int lastOccur = lastOccurance(nums, 4);
    cout << "last occurance of the target element at index: " << lastOccur << endl;
    return 0;
}
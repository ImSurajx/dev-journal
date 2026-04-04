// Binary Search
#include <iostream>
using namespace std;
int BinarySearch(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            high = mid - 1;
        else if (nums[mid] < target)
            low = mid + 1;
    }
    return -1;
}
int main()
{
    vector<int> nums = {2, 4, 6, 8, 10};
    int getIndex = BinarySearch(nums, 5);
    cout << "the target value is: " << getIndex << endl;
    return 0;
}
// ques: write a program to apply binary search in array sorted in decreasing order
#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
int main()
{
    vector<int> nums = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int getTarget = binarySearch(nums, 1);
    cout << "target found at the index: " << getTarget << endl;
    return 0;
}
// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
// inclusive in sorted order.
// There is only one repeated number in nums, return this repeated number.
// Input 1: arr[] = {1,2,3,3,4}
// Output 1: 3
// Input 2: arr[] = {1,2,2,3,4,5}
// Output 2:
#include <iostream>
using namespace std;
int findDuplicate(vector<int> &nums)
{
    int low = 1;
    int high = nums.size() - 1;
    while (low <= high)
    {
        int count = 0;
        int mid = low + (high - low) / 2;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] <= mid)
                count++;
        }
        if (count <= mid)
        {
            low = mid + 1; // right
        }
        else
        {
            high = mid - 1; // left
        }
    }
    return low;
}
int main()
{
    vector<int> nums = {1, 2, 3, 3, 4};
    int duplicate = findDuplicate(nums);
    cout << "duplicate element is: " << duplicate << endl;
    return 0;
}
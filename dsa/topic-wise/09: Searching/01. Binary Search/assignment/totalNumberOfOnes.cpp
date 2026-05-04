// ques: given a sorted binary array, efficiently count the total number of 1’s in it.
#include <iostream>
using namespace std;
int firstOccurance(vector<int> &nums, int target)
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
            high = mid - 1;
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
    vector<int> nums = {0, 0, 0, 1, 1, 1};
    int firstOccur = firstOccurance(nums, 0);
    int lastOccur = lastOccurance(nums, 0);
    cout << "total number of ones are: " << (lastOccur - firstOccur) + 1 << endl;
    return 0;
}
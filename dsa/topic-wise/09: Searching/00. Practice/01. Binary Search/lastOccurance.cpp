// ques: find the last occuracne of an element in the array.
#include <iostream>
using namespace std;
int lastOccurrence(vector<int> &nums, int target)
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
        else if (nums[mid] >= target)
        {
            high = mid - 1;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {2, 4, 4, 6, 8, 10};
    int lastOccur = lastOccurrence(nums, 4);
    cout << "the target value is: " << lastOccur << endl;
    return 0;
}
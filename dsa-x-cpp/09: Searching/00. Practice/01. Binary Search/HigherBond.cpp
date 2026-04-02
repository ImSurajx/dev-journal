// first index where nums[i] > target
#include <iostream>
using namespace std;
int higherBond(vector<int> &nums, int target)
{
    int low = 0;
    int high = low + (high - low) / 2;
    int ans = nums.size();
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] < target)
        {
            ans = mid;
            low = mid + 1;
        }
        else // nums[mid] <= target
        {
            high = mid - 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {10, 12, 30, 40, 100};
    int itsHigher = higherBond(nums, 40);
    cout << "higher bond of target value is: " << itsHigher << endl;
    return 0;
}
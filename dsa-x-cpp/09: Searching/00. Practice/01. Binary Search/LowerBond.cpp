// ques: find first index where element ≥ target
#include <iostream>
using namespace std;
// int lowerBond(vector<int> &nums, int target)
// {
//     int low = 0, high = nums.size() - 1;
//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;
//         if (nums[mid] == target)
//         {
//             if (nums[mid - 1] != target)
//                 return mid - 1;
//         }
//         else if (nums[mid] > target)
//         {
//             high = mid - 1;
//         }
//         else if (nums[mid] < target)
//         {
//             low = mid + 1;
//         }
//     }
//     return high;
// }

// better lower bond function
int lowerbond(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    int ans = nums.size();
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] >= target)
        {
            ans = mid;
            high = mid - 1;
        }
        else // nums[mid] < target
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {10,12,30,40,100};
    int itsLower = lowerbond(nums, 41);
    cout << "lower bond of target value is: " << itsLower << endl;
    return 0;
}
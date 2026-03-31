// ques: given a sorted array of non-negative distinct integers, find the smallest missing non-negative element in it.
#include <iostream>
using namespace std;
int main()
{
    vector<int> nums = {0, 1, 2, 3, 4, 8, 9, 12};
    // linear approach:
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if (nums[i] != i)
    //     {
    //         cout << i << endl;
    //         break;
    //     }
    // }

    // binary search:
    int lo = 0;
    int hi = nums.size() - 1;
    int ans = -1;
    while (lo < hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] == mid)
            lo = mid + 1;
        else
        {
            ans = mid;
            hi = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}
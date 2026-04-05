// Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the maximum number of 1’s.
#include <iostream>
using namespace std;
int lowerBound(vector<int> &nums, int target)
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
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> nums = {{0, 1, 1, 1}, {0, 0, 1, 1}, {1, 1, 1, 1}, {0, 0, 0, 0}};
    int idx = -1, max = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int lower = lowerBound(nums[i], 1);
        int totalOnes = nums[i].size() - lower;
        if (max < totalOnes)
        {
            max = totalOnes;
            idx = i;
        }
    }
    cout << idx << endl;
    return 0;
}
// 1608. Special Array With X Elements Greater Than or Equal X.
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int specialArray(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    if (nums[0] >= nums.size())
        return nums.size();
    for (int i = 0; i < nums.size(); i++)
    {
        int length = nums.size() - i;
        if (nums[i] >= length && nums[i] != nums[i - 1] &&
            length > nums[i - 1])
        {
            return nums.size() - i;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {3, 6, 7, 7, 0};
    int x = specialArray(nums);
    cout << "number of greater elements: " << x << endl;

    return 0;
}
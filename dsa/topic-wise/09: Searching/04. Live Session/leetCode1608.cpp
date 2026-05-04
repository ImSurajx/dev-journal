#include <iostream>
using namespace std;
int specialArray(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int length = nums.size() - i;
        if (nums[i] >= length && (i == 0 || nums[i - 1] < length))
            return length;
    }
    return -1;
}

int main()
{
    vector<int> nums = {3, 6, 7, 7, 0};
    int x = specialArray(nums);
    cout << "x numbers in nums that are greater than or equal to x: " << x << endl;
    return 0;
}
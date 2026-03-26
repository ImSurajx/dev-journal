#include <iostream>
using namespace std;
int thirdMax(vector<int> &nums)
{
    long max = LONG_MIN;
    long smax = LONG_MIN;
    long tmax = LONG_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        if (max == nums[i] || smax == nums[i] || tmax == nums[i])
            continue;
        if (max < nums[i])
        {
            tmax = smax;
            smax = max;
            max = nums[i];
        }
        else if (smax < nums[i])
        {
            tmax = smax;
            smax = nums[i];
        }
        else
        {
            tmax = nums[i];
        }
    }
    return tmax == LONG_MIN ? max : tmax;
}
int main()
{
    vector<int> nums = {1, 2, -2147483648};
    int tmax = thirdMax(nums);
    cout << "third max element is: " << tmax << endl;
    return 0;
}
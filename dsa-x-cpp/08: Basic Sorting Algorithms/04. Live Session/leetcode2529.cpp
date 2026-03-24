// 2529. Maximum Count of Positive Integer and Negative Integer
#include <iostream>
using namespace std;

int maximumCount(vector<int> &nums)
{
    int pos = 0, neg = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0)
            pos++;
        else if (nums[i] < 0)
            neg++;
    }
    return max(pos, neg);
}
int main()
{
    vector<int> nums = {-3, -2, -1, 0, 0, 1, 2};
    int x = maximumCount(nums);
    cout << "number of greater integers (neg or pos): " << x << endl;
    return 0;
}
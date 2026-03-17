// leetcode: 169
#include <iostream>
using namespace std;
int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    return nums[n / 2];
}
int main()
{
    vector<int> v = {2, 2, 1, 1, 1, 2, 2};
    int maxrepeat = majorityElement(v);
    cout << "max repeated number is: " << maxrepeat << endl;
    return 0;
}
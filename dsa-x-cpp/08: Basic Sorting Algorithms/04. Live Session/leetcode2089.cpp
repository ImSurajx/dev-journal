#include <iostream>
using namespace std;

vector<int> targetIndices(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    vector<int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            m.push_back(i);
        }
    }
    return m;
}
int main()
{
    vector<int> nums = {-3, -2, -1, 0, 0, 1, 2};
    vector<int> x = targetIndices(nums, 0);
    for (int i = 0; i < x.size(); i++)
        cout << x[i] << " ";
    cout << endl;
    return 0;
}
#include <iostream>
using namespace std;
void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    if (k > n)
        k = k % n;
    reverse(nums.begin(), nums.begin() + (n - k));
    reverse(nums.begin() + (n - k), nums.end());
    reverse(nums.begin(), nums.end());
}
int main()
{
    vector<int> nums1 = {1, 2, 3, 2, 5, 6};
    cout << "array after rotation: ";
    rotate(nums1, 3);
    for (const auto &i : nums1)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
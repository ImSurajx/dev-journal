#include <iostream>
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int p = m - 1;
    int q = n - 1;
    int r = (m + n) - 1;
    while (r >= 0)
    {
        if (p < 0)
        {
            nums1[r] = nums2[q];
            q--;
        }
        else if (q < 0)
        {
            nums1[r] = nums1[p];
            p--;
        }
        else if (nums1[p] >= nums2[q])
        {
            nums1[r] = nums1[p];
            p--;
        }
        else if (nums1[p] <= nums2[q])
        {
            nums1[r] = nums2[q];
            q--;
        }
        r--;
    }
}
int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    // before merge
    cout << "array before merge: ";
    for (const auto &i : nums1)
    {
        cout << i << " ";
    }
    cout << endl;
    merge(nums1, 3, nums2, 3);
    // after merge
    cout << "array after merge: ";
    for (const auto &i : nums1)
    {
        cout << i << " ";
    }
    return 0;
}
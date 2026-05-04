// 26. Remove Duplicates from Sorted Array
#include <iostream>
using namespace std;
int removeDuplicates(vector<int> &nums)
{
    int i = 0;
    int j = i + 1;
    while (j < nums.size())
    {
        if (nums[i] != nums[j])
        {
            nums[i + 1] = nums[j];
            i++;
        }
        j++;
    }
    return i + 1;
}

using namespace std;
int main()
{
    vector<int> v = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int size = removeDuplicates(v);
    for (int i = 0; i < size; i++)
        cout << v[i] << " ";
    cout << endl;
    return 0;
}
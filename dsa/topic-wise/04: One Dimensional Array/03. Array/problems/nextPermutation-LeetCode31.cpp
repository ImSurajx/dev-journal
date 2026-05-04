#include <iostream>
#include <vector>
using namespace std;
// take input
void input(vector<int> &nums, int n)
{
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
}
// display array
void display(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

// reverse array
void rev(vector<int> &nums, int i, int j)
{
    while (i < j)
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
}

// next permutation algorithm
// step 1: find pivot index.
// step 2: reverse things after pivot index or sort.
// step 3: find just greater index, which is just greater than idx
// step 4: swap pivot index or (pivot index + 1) or just greater than idx any one which is just greater..
void nextPermutation(vector<int> &nums)
{
    int idx = -1;
    for (int i = nums.size() - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            idx = i;
            break;
        }
    }
    if (idx == -1)
    {
        rev(nums, 0, nums.size() - 1);
    }
    else
    {
        rev(nums, idx + 1, nums.size() - 1);
        int idxx = -1;
        for (int i = idx + 1; i < nums.size(); i++)
        {
            if (nums[i] > nums[idx])
            {
                idxx = i;
                break;
            }
        }
        swap(nums[idx], nums[idxx]);
    }
}

int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    vector<int> v;
    cout << "enter elements of array: ";
    input(v, n);
    cout << "next permutation is: ";
    nextPermutation(v);
    display(v);
    return 0;
}
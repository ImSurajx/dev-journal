#include <iostream>
using namespace std;
void bubbleSort(vector<int> &nums)
{
    if (nums.size() == 1)
        return;
    bool isSwap = false;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size() - i - 1; j++)
        {
            if (nums[j] == 0)
            {
                swap(nums[j], nums[j + 1]);
                isSwap = true;
            }
        }
        if (!isSwap)
            return;
    }
}
void twoPointer(vector<int> &nums)
{
    int k = 0; // position of non-zero elements, fastest method O(n)
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[k]);
            k++;
        }
    }
}
void moveZeroes(vector<int> &nums)
{
    // bubbleSort(nums);
    twoPointer(nums);
}
int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);
    cout << "array is: ";
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";
    cout << endl;
    return 0;
}
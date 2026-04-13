// ques: you are given an mxn integer matrix, matrix with the following two properties
// - each row is sorted in non-decreasing order
// - the first integer of each row is greater than the last integer of the previous row..
// - given an integer target, return true if target is in matrix or false otherwise, you must write a solution in O(log(mxn) time complexity
#include <iostream>
#include <vector>
using namespace std;
bool binarySearch(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
            return true;
        else if (nums[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return false;
}
int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    bool flag = false;
    for (int i = 0; i < matrix.size(); i++)
    {
        flag = binarySearch(matrix[i], 13);
        if (flag == true)
        {
            cout << "element found" << endl;
            break;
        }
    }
    if (!flag)
        cout << "element not found" << endl;
    return 0;
}
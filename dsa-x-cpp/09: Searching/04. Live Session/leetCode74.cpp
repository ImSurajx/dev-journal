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
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size();    // total number of rows
    int m = matrix[0].size(); // total number of cols
    int low = 0;
    int high = n - 1;
    bool flag = false;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (target >= matrix[mid][0] && target <= matrix[mid][m - 1])
        {
            flag = binarySearch(matrix[mid], target);
            return flag;
        }
        else if (target > matrix[mid][m - 1])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return flag;
}
int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 3;
    bool flag = searchMatrix(matrix, target);
    cout << "element found or not: " << flag << endl;
    return 0;
}
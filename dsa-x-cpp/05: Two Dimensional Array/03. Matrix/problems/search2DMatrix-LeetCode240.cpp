#include <iostream>
using namespace std;
int main()
{
    // top-right approach:
    // if we don't use top-right, time limit will exceed
    // what top right mean, mean instead of moving in all direction move
    // only in two, only work with these kind of matrix start moving from
    // top right cell till element found if element is smaller go left, if
    // element if larger go down & so on..
    vector<vector<int>> matrix = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
    int target = 5;
    int rows = matrix.size();
    int cols = matrix[0].size();
    int i = 0;
    int j = cols - 1;
    while (i < rows && j >= 0)
    {
        if (target == matrix[i][j])
            return true;
        else if (target < matrix[i][j])
            j--;
        else
            i++;
    }
    return 0;
}
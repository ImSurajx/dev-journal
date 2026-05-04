// write a program to print the row number having the maximum sum in a given matrix.
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[4][4] = {{1, 3, 5, 7}, {3, 4, 7, 8}, {1, 4, 12, 3}};
    int idx = 0;
    int maxRowSum = 0;
    for (int i = 0; i < 4; i++)
    {
        int currentSum = 0;
        for (int j = 0; j < 4; j++)
        {

            currentSum += arr[i][j];
        }
        if (currentSum > maxRowSum)
        {
            maxRowSum = currentSum;
            idx = i;
        }
    }
    cout << idx << " row has the maximum sum of: " << maxRowSum << " in the given matrix." << endl;
    return 0;
}
// find row with maximum sum
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int m, n;
    cout << "enter order of matrix: ";
    cin >> m >> n;
    int arr[m][n];
    cout << "enter element of array: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j]; // row constent , column varies
        }
    }
    int maxSum = INT_MIN;
    int idx = -1;
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            idx = i;
        }
    }
    cout << "maximum row sum in matrix is: " << maxSum << endl;
    cout << "row with max sum in matrix is: " << idx << endl;
    return 0;
}
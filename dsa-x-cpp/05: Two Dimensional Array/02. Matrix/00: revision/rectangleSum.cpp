// rectangle sum (just logic, no optimization)
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
    int rectangleSum = 0;
    int l1 = 0, r1 = 0, l2 = 2, r2 = 2;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            rectangleSum += arr[i][j];
        }
    }
    cout << "sum of rectangle is: " << rectangleSum << endl;
    return 0;
}
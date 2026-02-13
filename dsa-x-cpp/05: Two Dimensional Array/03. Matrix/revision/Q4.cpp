// given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.
// input 1: n = 3
// output 1: [[1,2,3],[8,9,4],[7,6,5]]
// input 2: n = 1
// output 2: [[1]]
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    int arr[n][n];
    // minrow = 0, maxrow = n - 1, mincol = 0, maxcol = n - 1
    // right down left up
    int k = 0;
    int minrow = 0, maxrow = n - 1, mincol = 0, maxcol = n - 1;
    while (minrow <= maxrow && mincol <= maxcol)
    {
        // right
        if (minrow <= maxrow && mincol <= maxcol)
        {
            for (int i = mincol; i <= maxcol; i++)
            {
                arr[minrow][i] = ++k;
            }
            minrow++;
        }
        // down
        if (minrow <= maxrow && mincol <= maxcol)
        {
            for (int i = minrow; i <= maxrow; i++)
            {
                arr[i][maxcol] = ++k;
            }
            maxcol--;
        }
        // left
        if (minrow <= maxrow && mincol <= maxcol)
        {
            for (int i = maxcol; i >= mincol; i--)
            {
                arr[maxrow][i] = ++k;
            }
            maxrow--;
        }
        // up
        if (minrow <= maxrow && mincol <= maxcol)
        {
            for (int i = maxrow; i >= minrow; i--)
            {
                arr[i][mincol] = ++k;
            }
            mincol++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
// ques: wap to print the matrix in the spiral form
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "enter order of first matrix: ";
    cin >> m >> n;
    int arr[m][n];
    cout << "enter elements of the matrix: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    /*
    - HINTS
        - four loop inside a loop
        - tranverse in four direction right -> down -> left -> up repeat till loop breaks..
        - four variable, minrow, maxrow, mincol, maxcol
        - right -> minrow is fix, mincol to maxcol, minrow++
        - down -> maxcol is fix, minrow to maxrow, maxcol--
        - left -> maxrow is fix, maxcol to mincol, maxrow--
        - top -> mincol is fix, maxrow to minrow, mincol++
    */
    cout << "spiral form is: " << endl;
    int minrow = 0, maxrow = m - 1, mincol = 0, maxcol = n - 1;
    while (maxrow >= minrow && maxcol >= mincol)
    {
        if(minrow>maxrow || mincol>maxcol) break;
        // right
        for (int i = mincol; i <= maxcol; i++)
        {
            cout << arr[minrow][i] << " ";
        }
        minrow++;
        // down
        if(minrow>maxrow || mincol>maxcol) break;
        for (int i = minrow; i <= maxrow; i++)
        {
            cout << arr[i][maxcol] << " ";
        }
        maxcol--;
        if(minrow>maxrow || mincol>maxcol) break;
        // left
        for (int i = maxcol; i >= mincol; i--)
        {
            cout << arr[maxrow][i] << " ";
        }
        maxrow--;
        // up
        if(minrow>maxrow || mincol>maxcol) break;
        for (int i = maxrow; i >= minrow; i--)
        {
            cout << arr[i][mincol] << " ";
        }
        mincol++;
    }
    return 0;
}
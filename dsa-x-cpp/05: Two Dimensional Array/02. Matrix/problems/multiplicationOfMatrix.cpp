// ques: write a program to print the multiplication of two matrices  given by the user.
/*
- rules
    - arr[m][n] * brr[p][q] != brr[p][q]  * arr[m][n] .
    - n == p (col of arr == row of brr)
    - row of first matrix * column of second matrix.
    - order of resultent matrix will be [m][q] (row of first matrix, column of second matrix).
*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m, n, p, q;
    cout << "enter order of first matrix: ";
    cin >> m >> n;
    cout << "enter order of second matrix: ";
    cin >> p >> q;
    if (n != p)
    {
        cout << "matrix multiplication is not possible.";
        return 0;
    }
    else
    {
        int arr[m][n], brr[p][q];
        cout << "enter elements of first matrix: " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        cout << "enter elements of second matrix: " << endl;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> brr[i][j];
            }
        }
        // resultant matrix
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                // multiplication
                // res[i][j] = arr[i][0]*brr[0][j] + arr[i][1]*brr[1][j] + .... upto n or p...
                res[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    res[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }
        cout << "resultent matrix is: " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
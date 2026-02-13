// multiply two given matrix
// rules:
// if matrix order is mxn or pxq
// then n == p & the order of new matrix must be mxq;
#include <iostream>
using namespace std;
int main()
{
    int m, n, p, q;
    cout << "enter order of first matrix: ";
    cin >> m >> n;
    cout << "enter order of second matrix: ";
    cin >> p >> q;
    if (n == p)
    {
        int arr[m][n], brr[p][q];
        cout << "enter element of first matrix: " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        cout << "enter element of second matrix: " << endl;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> brr[i][j];
            }
        }
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    res[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }
        cout << "resultent matrix is: "<<endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "multiplication is not possible." << endl;
        return 0;
    }
    return 0;
}
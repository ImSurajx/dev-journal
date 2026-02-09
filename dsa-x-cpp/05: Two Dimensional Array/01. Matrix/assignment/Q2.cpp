// write a program to add two matrices and save the result in one of the given matrices.
#include <iostream>
using namespace std;
int main()
{
    int m, n, p, q;
    cout << "enter rows x columns (order) of first matrix: ";
    cin >> m >> n;
    cout << "enter rows x columns (order) of second matrix: ";
    cin >> p >> q;
    if (m != p || n != q)
    {
        cout << "sum is not posible." << endl;
        return 0;
    }
    cout << "enter element of first array: " << endl;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "enter element of second array: " << endl;
    int brr[p][q];
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> brr[i][j];
        }
    }
    cout << "resultent matrix is: " << endl;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            arr[i][j] += brr[i][j]; // make changes in exisiting array
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
// print transpose (without creating new matrix)
#include <iostream>
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
    cout << "matrix is: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[j][i] << " "; // column constent, row varies
        }
        cout << endl;
    }
    return 0;
}
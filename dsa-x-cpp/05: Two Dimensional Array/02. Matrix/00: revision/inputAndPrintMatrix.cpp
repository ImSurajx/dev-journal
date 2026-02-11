// take input of 2D matrix
// print matrix
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
            cin >> arr[i][j];
        }
    }
    cout << "matrix is: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
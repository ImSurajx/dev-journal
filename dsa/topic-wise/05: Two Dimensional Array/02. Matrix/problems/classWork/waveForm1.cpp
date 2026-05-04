// ques: wap to print the matrix in wave form
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
    cout << "wave matrix is: " << endl;
    // 1 2 3 6 5 4 7 8 9
    for (int i = m - 1; i >= 0; i--)
    {
        if (i % 2 != 0)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
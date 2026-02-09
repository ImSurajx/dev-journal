#include <iostream>
using namespace std;
int main()
{
    int m, n, p, q;
    cout << "enter rows x columns (order) of matrix: ";
    cin >> m >> n;
    cout << "enter element of array: " << endl;
    int arr[m][n];
    int trans[n][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            trans[i][j] = arr[j][i];
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
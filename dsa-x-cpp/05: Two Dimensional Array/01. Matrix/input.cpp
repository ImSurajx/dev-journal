#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "enter the number of rows: ";
    cin >> m; // rows
    cout << "enter the number of columns: ";
    cin >> n; // cols
    int arr[m][n];
    // taking input from user
    for (int i = 0; i < m; i++) // itrates in rows
    {
        for (int j = 0; j < n; j++) // itrates in columns
        {
            cin >> arr[i][j];
        }
    }
    // printing array:
    cout << "array is: ";
    for (int i = 0; i < m; i++) // itrates in rows
    {
        for (int j = 0; j < n; j++) // itrates in columns
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
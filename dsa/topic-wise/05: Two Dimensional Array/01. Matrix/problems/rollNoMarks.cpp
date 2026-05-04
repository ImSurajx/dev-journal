// store roll no of students & marks to
#include <iostream>
using namespace std;
int main()
{
    int m = 2, n;
    cout << "enter total number of students: ";
    cin >> n;      // rows
    int arr[m][n]; // rows x cols
    // taking input from user
    cout << "enter roll no of students: ";
    for (int i = 0; i < 1; i++) // itrates in rows
    {
        for (int j = 0; j < n; j++) // itrates in columns
        {
            cin >> arr[i][j];
        }
    }
    cout << "enter marks of students: ";
    for (int i = 1; i < 2; i++) // itrates in rows
    {
        for (int j = 0; j < n; j++) // itrates in columns
        {
            cin >> arr[i][j];
        }
    }
    // printing array:
    cout << "array is: " << endl;
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
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    vector<vector<int>> arr(m, vector<int>(n));

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    int rowmin = 0, rowmax = m - 1;
    int colmin = 0, colmax = n - 1;

    while (rowmin <= rowmax && colmin <= colmax)
    {
        for (int i = colmin; i <= colmax; i++)
            cout << arr[rowmin][i] << " ";
        rowmin++;

        for (int i = rowmin; i <= rowmax; i++)
            cout << arr[i][colmax] << " ";
        colmax--;

        if (rowmin <= rowmax)
        {
            for (int i = colmax; i >= colmin; i--)
                cout << arr[rowmax][i] << " ";
            rowmax--;
        }

        if (colmin <= colmax)
        {
            for (int i = rowmax; i >= rowmin; i--)
                cout << arr[i][colmin] << " ";
            colmin++;
        }
    }

    return 0;
}
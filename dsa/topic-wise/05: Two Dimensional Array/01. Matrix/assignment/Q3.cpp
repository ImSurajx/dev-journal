// ques: given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). return the sum of the rectangle from (l1,r1) to (l2, r2).
// Input 1:
// 1 2 -3 4
// 0 0 -4 2
// 1 -1 2 3
// -4 -5 -7 0
// l1 = 1, r1 = 2 , l2 = 3 , r2 = 3
// Output 1: -4
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int m, n;
    cout << "enter matrix order: ";
    cin >> m >> n;
    int arr[m][n];
    cout << "enter coordinates of matrix (l1,r1) & (l2,r2): ";
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    int startRow, startCol, endRow, endCol;
    // balance coordinates: start row must be minimum
    startRow = min(l1, l2);
    startCol = min(r1, r2);
    // balance coordinates: end row must be maximum
    endRow = max(l1, l2);
    endCol = max(r1, r2);
    cout << "enter elements of array: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    for (int i = startRow; i <= endRow; i++)
    {
        for (int j = startCol; j <= endCol; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << "sum is: " << sum << endl;
    return 0;
}
// ques: write a program to rotate the matrix by 90 degrees anti-clockwise.
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // transpose
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    // rotating matrix -90 deg
    for (int k = 0; k < 3; k++)
    {
        for (int j = 0; j < 3; j++)
        {
            int a = 0;
            int b = 2;
            while (a < b)
            {
                swap(arr[a][k], arr[b][k]);
                a++;
                b--;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
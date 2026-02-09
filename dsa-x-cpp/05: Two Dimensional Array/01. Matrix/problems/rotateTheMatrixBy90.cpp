// ques: wap to rotate the matrix by 90 degrees clockwise.
#include <iostream>
using namespace std;

void swapElement(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void reverseArray(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        swapElement(arr[i], arr[j]);
        i++;
        j--;
    }
}
int main()
{
    const int n = 3;
    int arr[n][n] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // rotate array by 90deg
    /*
    - first transpose the matrix
    - later reverse each row of the matrix
    */
    // transpose of matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swapElement(arr[i][j], arr[j][i]);
        }
    }
    // reverse each row of matrix
    for (int i = 0; i < n; i++)
    {
        reverseArray(arr[i], n);
    }
    cout << "matrix after 90 deg rotation: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
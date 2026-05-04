#include <iostream>
using namespace std;
int main()
{
    /*
    declaration:
    while initializing a 2D array it is necessary tomention the second (column) dimension, whereas first dimension (row) is optional.
    simple: column number is important
    */
    // matrix: array of arrays
    // rows & cols
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int brr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int crr[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << arr[0][0] << endl;
    arr[0][0] = 4;
    cout << arr[0][0] << endl;
    cout << brr[0][0] << endl;
    cout << crr[0][0] << endl;
}
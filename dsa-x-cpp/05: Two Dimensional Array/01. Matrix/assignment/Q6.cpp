/*
ques: write a function which accepts a 2D array of integers and its size as arguments and displays the
elements of middle row and the elements of middle column.
[Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]
*/
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[5][5] = {{1, 3, 5, 7, 8}, {3, 4, 7, 8, 8}, {1, 4, 1, 3, 2}, {3, 4, 7, 8, 8}, {1, 3, 5, 7, 8}};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            if (i == 5/2 || j == 5/2)
            {
                cout << arr[i][j] << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
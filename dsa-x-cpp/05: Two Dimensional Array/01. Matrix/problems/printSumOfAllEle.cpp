// ques: wap to print sum of all the elements of a 2D matrix.
#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {10, 9, 54, 59, 85, 99, 100, 105, 4};
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << "sum of all the elements of the array is: " << sum << endl;
    return 0;
}
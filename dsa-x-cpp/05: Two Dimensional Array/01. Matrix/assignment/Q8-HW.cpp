// ques: Write a C++ program to find the largest element & second largest element of a given 2D array of integers.
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[3][3] = {10, 9, 54, 59, 85, 99, 100, 105, 4};
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > max)
            {
                smax = max;
                max = arr[i][j];
            }
            else if (arr[i][j] != max && arr[i][j] > smax)
            {
                smax = arr[i][j];
            }
        }
    }
    cout << "largest element in the array is: " << max << endl;
    cout << "second largest element in the array is: " << smax << endl;
    return 0;
}
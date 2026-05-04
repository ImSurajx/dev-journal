// ques: write a c++ program to find the largest element of a given 2D array of integers
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[3][3] = {10, 9, 54, 59, 85, 99, 100, 105, 4};
    int max = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
        }
    }
    cout << "largest element in the array is: " << max << endl;
    return 0;
}
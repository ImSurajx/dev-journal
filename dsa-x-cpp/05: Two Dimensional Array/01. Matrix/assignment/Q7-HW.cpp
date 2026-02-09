// wap to find the min in the given array
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[3][3] = {10, 9, 54, 59, 85, 99, 100, 105, 4};
    int min = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] < min)
                min = arr[i][j];
        }
    }
    cout << "smallest element in the array is: " << min << endl;
    return 0;
}
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, max = INT_MIN;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];
    // taking input;
    cout << "enter element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "maximum element in the array: " << max << endl;
    return 0;
}
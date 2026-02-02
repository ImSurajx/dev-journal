#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, max = INT_MIN, smax = INT_MIN;
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
        if (arr[i] >= max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != max && smax < arr[i])
            smax = arr[i];
    }
    cout << "maximum element in the array: " << max << endl;
    cout << "second maximum element in the array: " << smax << endl;
    return 0;
}
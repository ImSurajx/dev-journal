// Find the second largest element in the given Array in one pass.
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, max = INT_MIN, smax = INT_MIN;
    cout << "enter size of array: ";
    cin >> n;
    if (n <= 1)
    {
        cout << "second max doesn't exist" << endl;
        return 0;
    }
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
        {
            smax = max;
            max = arr[i];
        }
        else if (arr[i] < max && arr[i] > smax)
        {
            smax = arr[i];
        }
    }
    if (smax == INT_MIN)
    {
        cout << "No second element exists" << endl;
        return 0;
    }
    cout << "maximum element in the array: " << max << endl;
    cout << "second maximum element in the array: " << smax << endl;
    return 0;
}
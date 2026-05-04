// Find the minimum value out of all elements in the array.
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, min = INT_MAX;
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
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "minimum element in the array: " << min << endl;
    return 0;
}
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // n = size of array
    // max  = largest element found so far
    // smax = second largest (largest element smaller than max)
    int n, max = INT_MIN, smax = INT_MIN;

    cout << "enter size of array: ";
    cin >> n;

    // If array has 0 or 1 element,
    // second maximum cannot exist
    if (n <= 1)
    {
        cout << "second max doesn't exist" << endl;
        return 0;
    }

    int arr[n];

    // Taking array input
    cout << "enter element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Single pass to find max and second max
    for (int i = 0; i < n; i++)
    {
        /*
            Case 1:
            If current element is greater than max,
            then:
            - current max becomes second max
            - current element becomes new max
        */
        if (arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        /*
            Case 2:
            If current element is:
            - smaller than max
            - but greater than smax

            Then it is the best candidate for second max
        */
        else if (arr[i] < max && arr[i] > smax)
        {
            smax = arr[i];
        }
        /*
            Other cases (ignored):
            - arr[i] == max   → duplicate max (ignore)
            - arr[i] <= smax  → not useful
        */
    }

    // Output results
    cout << "maximum element in the array: " << max << endl;
    cout << "second maximum element in the array: " << smax << endl;

    return 0;
}
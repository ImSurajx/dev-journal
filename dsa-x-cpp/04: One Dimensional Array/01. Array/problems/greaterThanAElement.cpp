#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];
    // taking input;
    cout << "enter element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // giving output;
    cout << "elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int ele;
    cout << "enter element you want to find: ";
    cin >> ele;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > ele)
            count++;
    }
    cout << "number of element greater than the given number is: " << count << endl;
    return 0;
}
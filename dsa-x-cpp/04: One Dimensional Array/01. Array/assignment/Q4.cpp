// Given an array, predict if the array contains duplicates or not.
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
    bool flag = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
            }
        }
    }
    if (flag)
    {
        cout << "array contains duplicate elements." << endl;
    }
    else
    {
        cout << "array doesn't contain duplicate elements" << endl;
    }
    return 0;
}
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
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
            flag = true;
    }
    if (flag == true)
        cout << "element found." << endl;
    else
        cout << "404 element not found" << endl;
    return 0;
}
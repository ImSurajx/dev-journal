// WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.
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
    int x = 0;
    bool flag = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != x)
        {
            cout << "missing element: " << x << endl;
            flag = true;
            break;
        }
        else
        {
            x++;
        }
    }
    if(flag==false) cout<<x<<endl;
    return 0;
}
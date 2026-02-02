// Calculate the product of all the elements in the given array.
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
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
    }
    cout << "product of elements are: " << product << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 2, 6, 8, 1, 7};
    int *ptr = arr; // ptr is a pointer which stores address of first element of array.
    for (int i = 0; i <= 5; i++)
    {
        cout << arr[i] << " "; // normal printing -> i[arr] is also a valid syntax.
    }
    ptr = arr; // ptr is again pointing to the 1st element
    *ptr = 8;  // ptr[0] = 8
    ptr++;     // ptr is pointing to 2nd element
    *ptr = 9;  // ptr[1] = 9
    ptr--;     // ptr is pointing to 1st element;
    cout << endl;
    for (int i = 0; i <= 5; i++)
    {
        cout << *ptr << " ";
        ptr++; // printing using pointers
    }
    return 0;
}
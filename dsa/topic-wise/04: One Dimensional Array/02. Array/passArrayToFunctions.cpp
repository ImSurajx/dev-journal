#include <iostream>
using namespace std;
void display(int arr[])
{
    int size = sizeof(arr)/sizeof(arr[0]); // error because arr is a pointer, so it's give size of pointer
    // accessing
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void change(int arr[])
{
    // updation
    arr[3] = 100;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    // accessing the elements of array in another function
    // updation using function on array, pass by value? or reference? -> reference
    display(arr);
    change(arr);
    display(arr);
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 2, 6, 1, 7};
    int *p = arr;
    int *q = &arr;          // wrong -> error
    int *r = &arr[0];       // if we gave, address of first element in pointer than it's mean that pointer can have access of entire array.
    cout << p << r << endl; // print address of first elements
}
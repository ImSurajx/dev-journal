#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]); // size of whole array / divide by size of one element
    cout << "size of array is: " << sizeOfArray << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    // memory alocation in array is continues in nature. 
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << "arr address: " << &arr << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << i << " : " << &arr[i] << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int *p = NULL;      // null pointer
    int *q = '\0';     // null character
    int *r = 0;       // 0
    // 0 -> 0x0, \0 -> 0x0 & NULL -> 0x0
    cout << p << endl; // 0x0 reserved address for pointer
    cout << q << endl; // 0x0 reserved address for pointer
    cout << r << endl; // 0x0 reserved address for pointer
    return 0;
}
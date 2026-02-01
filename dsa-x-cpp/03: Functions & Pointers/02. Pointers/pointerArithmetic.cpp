#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int *p = &a, *q = &b;
    *p = 5;
    cout << ++(*p) << endl; // ++a/a++ or --a/a--
    cout << ++p << endl;
    cout << ++p << endl; // increased by 4 bytes
    cout << *p << endl; // loose the actual address & value of pointer.
    return 0;
}
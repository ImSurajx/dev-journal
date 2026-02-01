#include <iostream>
using namespace std;
int main()
{
    int x = 4;
    int *p = &x; // we store address of x inside p;
    cout << &x << endl;
    cout << *p << endl;
    return 0;
}
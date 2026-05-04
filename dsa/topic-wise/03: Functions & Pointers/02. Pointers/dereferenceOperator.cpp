#include <iostream>
using namespace std;
int main()
{
    int x = 122;
    int *p = &x;
    cout << p << endl;
    cout << *p << endl; // accessing the value of pointer using dereference
    *p = 125;
    cout << x << endl; // updating the value of x using dereference
    return 0;
}
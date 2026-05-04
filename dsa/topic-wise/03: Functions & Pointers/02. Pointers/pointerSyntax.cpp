#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "enter x & y: ";
    int *p1 = &x, *p2 = &y;
    cin >> *p1 >> *p2;
    cout << "sum of x & y is: " << *p1 + *p2 << endl;
    return 0;
}
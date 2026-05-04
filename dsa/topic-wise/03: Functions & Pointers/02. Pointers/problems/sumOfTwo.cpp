#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "enter x: ";
    int *p = &x;
    cin >> *p; // taking input using pointers
    cout << "enter y: ";
    int *q = &y;
    cin >> *q;
    cout << "the sum of x + y is: " << (x + y) << endl;
    return 0;
}
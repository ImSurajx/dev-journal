// Operators
#include <iostream>
using namespace std;
int main()
{
    //  + , -, *, /
    // int : if we perform operation on int data type, it's always give us a integer value.
    int x = 5;
    int y = 2;
    x /= 2;

    // increment and decrement
    // first print then increment
    cout << "pre incremet: " << x++ << endl;
    // first use then increment
    cout << "post incremet: " << ++x << endl;
    // first print then decrement
    cout << "pre incremet: " << x-- << endl;
    // first use then decrement
    cout << "post incremet: " << --x << endl;
    return 0;
}
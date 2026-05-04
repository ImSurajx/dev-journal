// Write a program to find out the product of two numbers using pointers.
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
    cout << "the product of x * y is: " << (*p * *q) << endl;
    return 0;
}
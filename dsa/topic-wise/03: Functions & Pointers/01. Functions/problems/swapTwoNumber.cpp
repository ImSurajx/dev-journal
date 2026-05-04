#include <iostream>
using namespace std;
//  will not work b/c it's not pass by reference.
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    // swap without function
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "a is: " << a << endl;
    cout << "b is: " << b << endl;

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    // input: we take three numbers as input.
    // what is being checked: we will compare these three numbers with each other to find the greatest.
    // conditions: if(a>b) then check (a>c) a is greatest else c is greatest, else if(b>a) check b>c, b is greatest else c is greatest.
    // final output: greatest number.
    int a, b, c;
    cout << "enter any three numbers: ";
    cin >> a >> b >> c;
    // if (a > b)
    // {
    //     if (a > c)
    //     {
    //         cout << a << " is greatest." << endl;
    //     }
    //     else
    //     {
    //         cout << c << " is greatest." << endl;
    //     }
    // }
    // else
    // {
    //     if (b > c)
    //     {
    //         cout << b << " is greatest." << endl;
    //     }
    //     else
    //     {
    //         cout << c << " is greatest." << endl;
    //     }
    // }
    if (a >= b && a >= c)
    {
        cout << a << " is greatest." << endl;
    }
    else if (b >= a && b >= c)
    {
        cout << b << " is greatest." << endl;
    }
    else
    {
        cout << c << " is greatest." << endl;
    }
    return 0;
}
// ques: two numbers are entered through the keyboard, wap to find the value of one number raised to the power to another.
#include <iostream>
using namespace std;
int main()
{
    int base, exponent, negativeExponent;
    cout << "enter base: ";
    cin >> base;
    cout << "enter exponent: ";
    cin >> exponent;
    if (exponent < 0)
    {
        negativeExponent = exponent;
        exponent = -exponent;
    }
    float power = 1;
    for (int i = 1; i <= exponent; i++)
    {
        power *= base;
    }
    if (base == 0 && exponent == 0)
    {
        cout << "not defined"<<endl;
    }
    else if (negativeExponent < 0)
    {
        cout << base << " raised to power " << negativeExponent << " is equivalent to: " << 1.0 / power << endl;
    }
    else
        cout << base << " raised to power " << exponent << " is equivalent to: " << power << endl;
    return 0;
}
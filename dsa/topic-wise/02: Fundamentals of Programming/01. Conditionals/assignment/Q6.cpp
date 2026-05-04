// ques: if the marks of A, B and C are input through the keyboard, write a program to determine the student scoring least marks.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter marks of any three sub: ";
    cin >> a >> b >> c;
    if (a < b)
    {
        if (a < c)
        {
            cout << a << " is the least marks." << endl;
        }
        else
        {
            cout << c << " is the least marks." << endl;
        }
    }
    else
    {
        if (b < c)
        {
            cout << a << " is the least marks." << endl;
        }
        else
        {
            cout << c << " is the least marks." << endl;
        }
    }
    return 0;
}
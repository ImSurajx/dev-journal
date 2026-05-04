// ques: take 3 positive integers input and print the greatest of them.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter any three numbers: ";
    cin >> a >> b >> c;
    if (a > b && a > c)
        cout << a << " is the greatest" << endl;
    else if (b > a && b > c)
        cout << b << " is the greatest" << endl;
    else
    {
        cout << c << " is the greatest" << endl;
    }
    return 0;
}
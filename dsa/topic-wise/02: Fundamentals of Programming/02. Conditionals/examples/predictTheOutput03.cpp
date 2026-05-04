#include <iostream>
using namespace std;
int main()
{
    char x;
    int a = 2;
    x = (a > 0) ? 'a' : 'S';
    cout << "value of x : " << x << endl; // a
    cout << "value of a : " << a << endl; // 2
    return 0;
}
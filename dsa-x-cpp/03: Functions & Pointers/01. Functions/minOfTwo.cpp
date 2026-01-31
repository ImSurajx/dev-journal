#include <iostream>
using namespace std;
int mini(int x, int y)
{
    int a;
    if (x > y)
        a = y;
    else
        a = x;
    return a;
}
int main()
{
    cout << mini(10, -8) << endl;
    return 0;
}
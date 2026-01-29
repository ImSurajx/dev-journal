#include <iostream>
using namespace std;
int main()
{
    int x = 10, y = 1;
    if (x++ > 10 || x / 0 == 0)
    {
        cout << y << endl;
    }
    else
    {
        cout << x << endl;
    }
    return 0;
}
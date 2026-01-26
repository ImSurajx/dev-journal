#include <iostream>
using namespace std;
int main()
{
    int x = 4, y = 0, z;
    while (x >= 0)
    {
        x--; // 3, 2, 1, 0, -1
        y++; // 1, 2, 3, 4, 5
        if (x == y) // false, true -> skip, false, false, false
            continue;
        else
            cout << x << " " << y << endl; // (3,1), (1,3), (0,4), (-1,5)
    }
    return 0;
}
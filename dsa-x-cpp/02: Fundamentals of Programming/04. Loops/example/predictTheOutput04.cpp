#include <iostream>
using namespace std;
int main()
{
    int x = 4, y = 0, z;
    while (x >= 0)
    {
        if (x == y)
        {
            break;
        }
        else
        {
            cout << x << " " << y << endl; // (4,0), (3,1) -> look breaks/end here
        }
        x--;
        y++;
    }
    return 0;
}
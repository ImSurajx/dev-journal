#include <iostream>
using namespace std;
int mini(int x, int y)
{
    if (x < y)
        return x;
    else
        return y;
}
int hcf(int x, int y)
{
    int minimum = mini(x, y);
    int hcf = 0;
    while (minimum >= 0)
    {
        if (x % minimum == 0 && y % minimum == 0)
        {
            hcf = minimum;
            break;
        }
        minimum--;
    }
    return hcf;
}
int main()
{
    int x, y;
    cout << "enter x: ";
    cin >> x;
    cout << "enter y: ";
    cin >> y;
    cout << "greatest common divisor is: " << hcf(x, y) << endl;
    return 0;
}
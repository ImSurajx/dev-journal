// ques: given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "enter value of x & y: ";
    cin >> x >> y;
    if (x == 0 && y == 0)
    {
        cout << "it's origin" << endl;
    }
    else if ((x > 0 || x < 0) && y == 0)
    {
        cout << "lies on x-axis" << endl;
    }
    else if (x == 0 && (y > 0 || y < 0))
    {
        cout << "lies on y-axis" << endl;
    }
    else
    {
        cout << "lies on the plane." << endl;
    }
    return 0;
}
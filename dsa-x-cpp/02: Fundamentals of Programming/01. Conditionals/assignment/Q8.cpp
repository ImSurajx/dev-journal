// ques: given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.
#include <iostream>
using namespace std;
int main()
{
    int x1, x2, x3, y1, y2, y3, area;
    cout << "enter values of x1,y1,x2,y2,x3,y3: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    area = (((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2))));
    if (area == 0)
    {
        cout << "all points fall on one staright line." << endl;
    }
    else
    {
        cout << "all points don't fall on one staright line." << endl;
    }
    return 0;
}
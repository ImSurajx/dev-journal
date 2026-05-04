// Write a function to take the radius of a circle as an argument and return its area.
#include <iostream>
using namespace std;
float radiusOfCircle(int a)
{
    return 3.1415 * a * a;
}
int main()
{
    float r;
    cout << "enter radius of circle: ";
    cin >> r;
    cout << "the area of circle is: " << radiusOfCircle(r) << endl;
    return 0;
}
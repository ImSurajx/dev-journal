// ques: given the radius of the circle, predict whether numerically the area of this circle is larger than the circumference or not.
#include <iostream>
using namespace std;
int main()
{
    float radius, area, circumference;
    cout << "enter radius of circle : ";
    cin >> radius;
    area = 3.1415 * radius * radius;
    circumference = 3.1415 * 2 * radius;
    if (area > circumference)
        cout << area << " unit^2 is greater than " << circumference << " unit" << endl;
    else
    {
        cout << circumference << " unit is greater than " << area << " unit^2" << endl;
    }
    return 0;
}
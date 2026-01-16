// ques: given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.
#include <iostream>
using namespace std;
int main()
{
    float length, breadth, area, perimeter;
    cout << "enter length & breadth of rectangle : ";
    cin >> length >> breadth;
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    if (area > perimeter)
        cout << area << " unit^2 is greater than " << perimeter << " unit" << endl;
    else
    {
        cout << perimeter << " unit is greater than " << area << " unit^2" << endl;
    }
    return 0;
}
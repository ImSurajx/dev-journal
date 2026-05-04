// ques: write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.
#include <iostream>
using namespace std;
int main()
{
    int side1, side2, side3;
    cout << "enter three sides of triangle: ";
    cin >> side1 >> side2 >> side3;
    if (side1 == side2)
    {
        if (side1 == side3)
        {
            cout << "these are the sides of equilateral triangle." << endl;
        }
        else
        {
            cout << "these are the sides of isosceles triangle." << endl;
        }
    }
    else
    {
        if (side1 == side3)
        {
            cout << "these are the sides of isosceles triangle." << endl;
        }
        else
        {
            cout << "these are the sides of scalene triangle." << endl;
        }
    }
    return 0;
}
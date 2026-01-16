// ques: take 3 numbers input and tell if they can be the side of a triangle
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter three sides: ";
    cin >> a >> b >> c;
    if (((a + b) > c) && ((c + b) > a) && ((a + c) > b))
    {

        cout << "yes, can be sides of triangle." << endl;
    }
    else
    {
        cout << "they can't be sides of tringle." << endl;
    }
    return 0;
}
// example: take two integer a & b: a > b, and find the remainder when a is divided by b
#include <iostream>
using namespace std;
int main()
{
    int dividend = 10;
    int divisor = 3;
    int quotient = dividend / divisor;
    int remainder = dividend - (divisor * quotient);
    cout << "remainder is: " << remainder << endl;
    cout << "moudlus is: " << dividend % divisor << endl; // direct remainder
    return 0;
}
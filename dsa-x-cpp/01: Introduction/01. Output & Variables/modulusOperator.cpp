// example: take two integer a & b: a > b, and find the remainder when a is divided by b
#include <iostream>
using namespace std;
int main()
{
    int dividend = 10;
    int divisor = 3;
    cout << "moudlus is: " << dividend % divisor << endl; // direct remainder
    // if a > b -> a%b = remainder, a = b remainder = 0, if a < b then remainder is a.
    // if a%(-b) = a%b, (-a)%b = -(a%b), (-a) % (-b) = (-a)%b = -(a%b)
    return 0;
}
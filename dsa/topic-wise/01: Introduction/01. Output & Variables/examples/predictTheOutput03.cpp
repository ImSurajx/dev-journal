#include <iostream>
using namespace std;
int main()
{
    float a = 5, b = 2;
    int c;
    c = a % b; // error: we can't perform modulus on float data type, language dependent.
    cout << c; // 1
    return 0;
}
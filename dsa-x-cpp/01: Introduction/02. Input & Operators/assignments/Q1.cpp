// find the output for this code, let input: 2,3,6
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter first number: ";
    cin >> x;
    int y, m;
    cout << "enter second number and values for taking modulus \n";
    cin >> y >> m;
    int z = (x * y) % m;
    cout << "output is:" << z << endl; // 0
    return 0;
}
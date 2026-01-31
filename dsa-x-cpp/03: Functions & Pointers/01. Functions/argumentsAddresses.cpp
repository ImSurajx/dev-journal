#include <iostream>
using namespace std;
void func(int x, int y) // function arguments know as formal parameters
{
    cout << "function x: " << &x << endl;
    cout << "function y: " << &y << endl;
}
int main()
{
    int x = 3;
    int y = 7;
    cout << "main x: " << &x << endl;
    cout << "main y: " << &y << endl;
    func(x, y); // argument given as input, is known as actual paramenters
    return 0;
}
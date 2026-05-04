#include <iostream>
using namespace std;
int main()
{
    // each byte has an individual address in the memory.
    int x = 5, y = 5;
    cout << &x << endl; // 0x16f486dac -> address of variable
    cout << &y << endl; // 0x16db16da8 -> address of variable
}
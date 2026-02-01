#include <iostream>
using namespace std;
int main()
{
    // for int/float 2^32 , for char/bool = 2^4 b/c 1 byte = 8 bits
    cout << "size of int: " << sizeof(int) << endl;
    cout << "size of float: " << sizeof(float) << endl;
    cout << "size of bool: " << sizeof(bool) << endl;
    cout << "size of char: " << sizeof(char) << endl;
    return 0;
}
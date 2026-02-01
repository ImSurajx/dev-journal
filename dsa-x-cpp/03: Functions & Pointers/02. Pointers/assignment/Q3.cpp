// Predict the output of the following code snippet.
#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 20; 
    int *ptr = &a; // *ptr reference of variable a.
    b = *ptr + 1; // b = 10 + 1 = 11
    ptr = &b; // ptr becoem reference of variable b.
    cout << *ptr << " " << a << " " << b; // 11 10 11
    return 0;
}
// Predict the output of the following code snippet.
#include <iostream>
using namespace std;
int main()
{
    int a = 15, b = 20;
    int *ptr = &a;  // ptr is reference of variable a
    int *ptr2 = &b; // ptr2 is reference of variable b
    *ptr = *ptr2;   // a become b -> 20 & 20
    cout << *ptr << " " << *ptr2 << endl;
    return 0;
}
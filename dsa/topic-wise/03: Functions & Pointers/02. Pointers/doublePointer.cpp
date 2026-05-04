// used to store address of single pointer
#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    int *p = &x;
    int **dp = &p; // double pointer, same goes for tripple pointer 
    cout << &x << endl;
    cout << p << endl;
    cout << *dp << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int i;
    while (i = 10) // not a condition it's assignment, so it's always true
    {
        cout << i << endl; // infinite loop.
        i = i + 1;
    }
    return 0;
}
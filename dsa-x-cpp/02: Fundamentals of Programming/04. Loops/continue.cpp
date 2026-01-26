// wap to print the odd numbers till 100;
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            continue; // skip on condition true
        }
        cout << i << ", ";
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int j;
    while (j <= 10)
    {
        cout << j << endl; // j is initialized but not declared so it's store garbage values, sometimes infinite loop.
        j = j + 1;
    }
    return 0;
}
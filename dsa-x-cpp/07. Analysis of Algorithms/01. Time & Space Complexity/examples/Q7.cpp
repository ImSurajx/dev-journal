// what if this time we traverse them in a nested manner?
// for each m times loop it's will run n times which mean m runs n times so t.c will nxm..
#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int m = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << "okay" << " ";
        }
        cout << endl;
    }
    return 0;
}
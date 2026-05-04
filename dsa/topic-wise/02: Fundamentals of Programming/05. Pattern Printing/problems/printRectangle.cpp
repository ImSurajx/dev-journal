#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    for (int i = 1; i <= n; i++)
    { // for printing rows
        for (int i = 1; i <= m; i++)
        { // for printing cols
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
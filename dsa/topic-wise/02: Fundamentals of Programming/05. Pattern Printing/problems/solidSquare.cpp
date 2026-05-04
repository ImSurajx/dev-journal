#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter side of square : ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    { // for printing rows
        for (int i = 1; i <= n; i++)
        { // for printing cols
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
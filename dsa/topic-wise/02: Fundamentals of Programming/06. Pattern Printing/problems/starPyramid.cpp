#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of rows: ";
    cin >> n;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= a; j++)
        {
            cout << "* ";
        }
        a+=2;
        cout << endl;
    }
    return 0;
}
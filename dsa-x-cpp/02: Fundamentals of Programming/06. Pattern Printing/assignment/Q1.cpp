#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of rows: ";
    cin >> n;
    for (int i = 1; i <= n-1; i++)
    {
        int a = 1;
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << a++ << " ";
        }
        cout << endl;
    }
    return 0;
}
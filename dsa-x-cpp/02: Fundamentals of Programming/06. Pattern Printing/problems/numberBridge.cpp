#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of rows: ";
    cin >> n;
    // top number
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    int nst = n - 1;
    int nsp = 1;
    for (int i = 1; i <= n - 1; i++)
    {
        int a = 1;
        // numbers
        for (int j = 1; j <= nst; j++)
        {
            cout << a++ << " ";
        }
        // stars
        for (int k = 1; k <= nsp; k++)
        {
            a++;
            cout << "  ";
        }
        // numbers
        for (int j = 1; j <= nst; j++)
        {
            cout << a++ << " ";
        }
        nsp += 2;
        nst--;
        cout << endl;
    }
    return 0;
}
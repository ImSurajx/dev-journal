#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of rows: ";
    cin >> n;
    int a;
    for (int i = 1; i <= n; i++)
    {
        // if (i % 2 != 0)
        //     a = 1; // when row is odd
        // else
        //     a = 0; // row is even
        for (int j = 1; j <= i; j++)
        {
            // cout << a << " ";
            // // flipping
            // if (a == 1)
            //     a = 0;
            // else
            //     a = 1;
            if (((i+j)%2==0))
            {
                cout << "1 ";
            }
            else
            {
                cout << "0  ";
            }
        }
        cout << endl;
    }
    return 0;
}
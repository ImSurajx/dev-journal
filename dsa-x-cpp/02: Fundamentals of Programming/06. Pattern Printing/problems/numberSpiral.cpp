/*
enter num: 4
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter num: ";
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        // step 1: each cell has value of min(i,j) but only true when i & j <= n;
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            // step 2: so we create a false/pseudo row number or col number -> create a fake index number.
            int a = i;
            int b = j;
            if (a > n) // a + n = 2*n so a = 2*n-1
                a = 2 * n - i;
            if (b > n)
                b = 2 * n - j;
            int x = min(a, b);
            /*
            if we cout x then we get reverse of the value that we want.
            enter num: 4
            1 1 1 1 1 1 1
            1 2 2 2 2 2 1
            1 2 3 3 3 2 1
            1 2 3 4 3 2 1
            1 2 3 3 3 2 1
            1 2 2 2 2 2 1
            1 1 1 1 1 1 1
            */
            cout << n - x + 1 << " ";
            // 4 - 1 + 1 = 4
            // 4 - 2 + 1 = 3
            // 4 - 3 + 1 = 2
            // 4 - 4 + 1 = 1;
        }
        cout << endl;
    }
    return 0;
}
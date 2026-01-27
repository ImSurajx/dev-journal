#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter side: ";
    cin >> n;
    int newSide = 2 * n - 1;
    for (int i = 1; i <= newSide; i++)
    {
        if (i <= (newSide / 2) + 1)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int j = 1; j <= newSide - i + 1; j++)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}
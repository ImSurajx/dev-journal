#include <iostream>
using namespace std;
int factorial(int x)
{
    int fact = 1;
    while (x > 0)
    {
        fact *= x;
        x--;
    }
    return fact;
}

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << factorial(i) << endl;
    }
    return 0;
}
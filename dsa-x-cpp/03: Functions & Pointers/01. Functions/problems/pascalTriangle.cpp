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

int combination(int n, int r)
{
    int combi = factorial(n) / (factorial(r) * factorial(n - r));
    return combi;
}

int permutation(int n, int r)
{
    int permu = factorial(n) / factorial(n - r);
    return permu;
}

int main()
{
    int n;
    cout << "enter no of rows: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}
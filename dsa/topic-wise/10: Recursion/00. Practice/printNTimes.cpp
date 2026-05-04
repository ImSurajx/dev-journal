#include <iostream>
using namespace std;
void print(int n)
{
    if (n == 0)
        return;
    cout << "Suraj Kumar" << endl,
        print(n - 1);
}
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    print(n);
}
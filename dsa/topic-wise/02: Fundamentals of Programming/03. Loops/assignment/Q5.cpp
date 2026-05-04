// Display this GP - 3,12,48,.. upto ‘n’ terms.
#include <iostream>
using namespace std;
int main()
{
    int a, d, n;
    cout << "enter first term: ";
    cin >> a;
    cout << "enter common ratio: ";
    cin >> d;
    cout << "enter no. of terms you want: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a = a * d; // seprate variable
    }
    return 0;
}
//  Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
#include <iostream>
using namespace std;
int main()
{
    int a, d, n;
    cout << "enter first term: ";
    cin >> a;
    cout << "enter common difference: ";
    cin >> d;
    cout << "enter no. of terms you want: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << (a + (i - 1) * d) << endl;
    }
    return 0;
}
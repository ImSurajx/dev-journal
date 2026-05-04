// ques: display this ap 1,3,5,7,9.. upto 'n'
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
// ques: display this gp 1,2,4,8,16,32.. upto 'n', using seprate variable.
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
// ques: display this ap 100, 97, 94,.. upto all term which are positive.
#include <iostream>
using namespace std;
int main()
{
    int a, d;
    cout << "enter first term: ";
    cin >> a;
    cout << "enter common difference: ";
    cin >> d;
    for (int i = a; i >= 0; i -= d)
    {
        cout << i << endl;
    }
    return 0;
}
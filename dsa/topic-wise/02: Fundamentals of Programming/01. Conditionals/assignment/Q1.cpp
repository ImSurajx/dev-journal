// Ques: Take 2 integers input and print the greatest of them
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter two numbers: ";
    cin >> a >> b;
    if (a > b)
        cout << a << " is the greatest." << endl;
    else
        cout << b << " is the greatest." << endl;
    return 0;
}

// classwork: print good-morning n number of times, where n is user inputs
#include <iostream>
using namespace std;
void greet(int n)
{
    if (n == 0)
        return;
    cout << "good morning" << endl;
    greet(n - 1);
}
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    greet(n);
    return 0;
}
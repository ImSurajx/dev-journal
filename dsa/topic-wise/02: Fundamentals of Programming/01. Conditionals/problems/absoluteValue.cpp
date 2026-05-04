// ques: given an integer. print the absolute value of that integer
#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number: ";
    int num;
    cin >> num;
    if (num < 0)
        cout << "absolute value: " << (num = -1 * num) << endl;
    else if (num == 0)
        cout << "no absolute value for zero." << endl;
    else
        cout << "absolute value: " << (1 * num) << endl;
    return 0;
}
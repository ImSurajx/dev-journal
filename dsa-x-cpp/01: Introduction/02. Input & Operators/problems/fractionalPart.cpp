// ques: take float input and print the fractional part of the real number.
#include <iostream>
using namespace std;
int main()
{
    float num;
    cout << "enter a number: ";
    cin >> num;
    if (num > 0)
    {
        cout << "the fractional part is: " << num - int(num) << endl;
    }
    else
    {
        cout << "the fractional part is: " << 1 + (num - int(num)) << endl;
    }
    return 0;
}
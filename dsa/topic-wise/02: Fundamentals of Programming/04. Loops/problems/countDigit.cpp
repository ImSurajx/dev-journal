// count total number of digit
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter number: ";
    cin >> num;
    int count = 0;
    int tempNum = num;
    while (num > 0)
    {
        num /= 10;
        count++;
    }
    if (tempNum == 0)
        cout << "total number of digit is: " << 1 << endl;
    else
        cout << "total number of digit is: " << count << endl;
    return 0;
}
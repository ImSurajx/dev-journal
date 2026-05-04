// wap to check if a number is composite or not
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    bool flag = true; // true means prime number
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (num == 1)
    {
        cout << "1 is neither prime or nor composite" << endl;
    }
    else if (flag)
        cout << num << " is a prime number" << endl;
    else
        cout << num << " is a composite number." << endl;
    return 0;
}
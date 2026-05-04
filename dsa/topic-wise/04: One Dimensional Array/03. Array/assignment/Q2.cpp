// find the factorial of a large number.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> fact;
    fact.push_back(1);
    cout << "enter value: ";
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        int carry = 0, digit = 0;
        for (int j = 0; j < fact.size(); j++)
        {
            digit = fact[j];
            digit = digit * i + carry;
            carry = digit / 10;
            digit = digit % 10;
            fact[j] = digit;
        }
        while (carry > 0)
        {
            fact.push_back(carry%10);
            carry /= 10;
        }
    }
    cout << "factorial is: ";
    for (int i = fact.size() - 1; i >= 0; i--)
    {
        cout << fact[i] << " ";
    }
    cout << endl;
    return 0;
}
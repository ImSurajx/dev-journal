// Given two numbers a and b, write a function to print all odd numbers between them.
#include <iostream>
using namespace std;
void oddNumbers(int a, int b)
{
    for (int i = a+1; i < b; i++)
    {
        if(i%2==0) continue;
        cout<<i<<", ";
    }
}
int main()
{
    int a, b;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    oddNumbers(a,b);
    return 0;
}
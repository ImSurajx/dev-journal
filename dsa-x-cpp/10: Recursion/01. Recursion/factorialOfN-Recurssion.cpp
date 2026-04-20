// ques: print all the factorical till n using void function.
#include <iostream>
using namespace std;
int fact(int n)
{
    
    if (n == 0 || n == 1)// base case: define when we have to stop our recurssion.
    {
        return 1;
    }    
    return n * fact(n - 1);
}
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    cout << fact(n) << endl;
}
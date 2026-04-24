#include <iostream>
using namespace std;
void printNtoOne(int n)
{
    if (n == 0)
        return;         // base case of printing
    cout << n << " ";   // print value of n..
    printNtoOne(n - 1); // call each time n - 1; ››
}
void printOneToN(int n)
{
    if (n == 0)
        return;         // base case of printing
    printOneToN(n - 1); // call each time n - 1; ››
    cout << n << " ";   // print value of n..
}
int main()
{
    printNtoOne(10); // here 10 represents n.
    cout << endl;
    printOneToN(10); // here 10 represents n.
    return 0;
}
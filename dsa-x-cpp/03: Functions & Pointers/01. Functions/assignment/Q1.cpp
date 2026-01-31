// Write a function to print squares of n natural numbers.
#include <iostream>
using namespace std;
void nnumbers(int a)
{
    for (int i = 1; i <= a; i++)
    {
        cout << i << " ";
    }
}
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    nnumbers(n);
    return 0;
}
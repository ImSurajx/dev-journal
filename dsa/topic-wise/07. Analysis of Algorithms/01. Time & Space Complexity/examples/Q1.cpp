// ques: calculate the time complexity for iterating in a loop.
/*
* total number of operations which is performed by the loop is in general is n.
* so time complexity for the loop is O(n) -> which mean order of n, total n operations 
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    return 0;
}
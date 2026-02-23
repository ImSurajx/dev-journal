// ques: calculate the time complexity for iterating in a loop, what if n increament += 2
/*
 * total number of operations which is performed by the loop is in general is n/2.
 * so time complexity will be O(n/2) -> which mean O(kn) -> where k is constent
 * so O((1/2)*n) -> O(n) -> so time complexity remains same we replace constent with 1..
 * even if O(n + k) or O(n-k) so = O(n)
 * even if O(5n^3 + 3) so = O(n^3)
 * even if O(6n^2 - 8) so = O(n^2)
 * even if O(6n^2 + n) so = O(n^2)
 * even if O(11*n^13/2 + 7*n^4 - 2*n^3 + 6^n) so = O(n^13/2) -> see the highest power
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i += 2)
    {
        cout << i << " ";
    }
    return 0;
}
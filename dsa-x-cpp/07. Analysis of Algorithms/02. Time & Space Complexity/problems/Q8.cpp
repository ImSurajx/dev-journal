// ques: calculate the time complexity for the following code snippet
// t.c: O(log (log n)).
#include <iostream>
using namespace std;
int main()
{
    int c = 0, n = 10;
    for (int i = 2; i * i <= n; i *= i)
    {
        cout << c++ << endl;
    }
    return 0;
}
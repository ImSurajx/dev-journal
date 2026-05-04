// ques: calculate the time complexity for the below code snippet
// no of operation -> no of times i is changing..
// this loop will end k^x > n
// k^x ~ n
// T.C = O(x) -> O(log n);
#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int c = 0;
    for (int i = 1; i <= n; i*=2)
    {
        cout << c++ << endl;
    }
    return 0;
}
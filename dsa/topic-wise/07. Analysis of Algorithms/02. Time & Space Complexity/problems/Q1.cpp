// ques: calculate the time complexity for the following code snippet
// soln: T.C -> O(log n);
#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int c = 0;
    for (int i = 1; i < n; i += i)
    {
        cout << c++ << endl;
    }
    return 0;
}
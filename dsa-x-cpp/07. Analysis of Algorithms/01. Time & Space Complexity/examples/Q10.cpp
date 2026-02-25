// ques: calculate the space complexity of the following code.
// n means fixed size, constent, so the space complexity will be O(1);
#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i]++;
    }
    return 0;
}
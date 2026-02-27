// ques: calculate the time complexity for the following code snippet
// t.c: O( root n).
#include <iostream>
using namespace std;
int main()
{
    int c = 0, n = 10;
    for (int i = 1; i * i <= n; i *= 2) // 
    {
        for (int j = 0; j < i; j++)
        {
            c++;
        }
    }
    return 0;
}
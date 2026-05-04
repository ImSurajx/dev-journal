// ques: calculate the time coplexity for the below code snippet
#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int m = 5;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            cout<<c++<<" ";
        }
    }

    return 0;
}
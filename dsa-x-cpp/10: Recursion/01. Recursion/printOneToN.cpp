// ques: print 1 to n (extra parameters);
#include <iostream>
using namespace std;
void printNtoOne(int n, int i)
{
    if (i > n)
        return;
    cout << i << " ";
    printNtoOne(n, i + 1);
}

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    printNtoOne(n, 1);
    return 0;
}

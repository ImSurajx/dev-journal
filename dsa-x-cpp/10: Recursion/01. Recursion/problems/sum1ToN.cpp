#include <iostream>
using namespace std;
void sum(int n, int s)
{
    if (n == 0)
    {
        cout << s << endl;
        return;
    }
    sum(n - 1, s + n);
}
int main()
{
    sum(10, 0);
    return 0;
}
// ques: what is the result of the following code fragment?
#include <iostream>
using namespace std;
int main()
{
    int num1;
    int p = 5, q = 10;
    p += q -= p; // right to left : q = 5 then p = 10
    cout << p << " " << q << endl;
    return 0;
}
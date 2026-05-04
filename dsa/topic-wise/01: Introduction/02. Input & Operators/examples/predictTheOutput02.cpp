// ques: what is the result of the following code fragment?
#include <iostream>
using namespace std;
int main()
{
    bool p = false, q = false, r = true;
    cout << (p == q == r) << endl ; // left -> right 
    return 0;
}
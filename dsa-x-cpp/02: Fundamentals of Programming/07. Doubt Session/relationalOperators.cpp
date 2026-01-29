#include <iostream>
using namespace std;
int main()
{
    int k = 35;
    // the real thing
    cout << (k == 35) << endl // 1 -> true
         << (k = 50) << endl; // 50 
    cout << (k >= 40) << endl; // 1 -> true
    return 0;
}
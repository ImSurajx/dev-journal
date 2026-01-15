// Ques: Find the output for this code. let input 2,3
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    x += y;            // x become 5
    x -= y;            // x become 2
    x %= y;            // x become 2
    cout << x << endl; // 2
    return 0;
}
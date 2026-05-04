// ques: find the output for this code let input 3, 2
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter first number: ";
    cin >> x;
    int y;
    cout << "enter second number: ";
    cin >> y;
    cout << (x != y) << " " << (x >= y) << endl; // 1 & 1
    return 0;
}
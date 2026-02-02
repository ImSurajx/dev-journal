#include <iostream>
using namespace std;
int main()
{
    int num[26], temp;
    num[0] = 100;
    num[25] = 200;
    temp = num[25];   // temp = 200
    num[25] = num[0]; // num[25] = 100 -> ans
    num[0] = temp;    // num[0] = 200 -> ans
    cout << endl
         << num[0]
         << " "
         << num[25];
    return 0;
}
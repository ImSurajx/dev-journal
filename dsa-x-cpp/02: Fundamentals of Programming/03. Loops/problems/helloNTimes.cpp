// ques: prin hello world n times. take n as input from user.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "hello world" << endl;
    }
    return 0;
}
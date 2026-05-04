// ques: take positive integer input and tell if it is even or odd
#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number: ";
    int num;
    cin >> num;
    if (num % 2 == 0)
        cout << num << " is even." << endl;
    else
        cout << num << " is odd." << endl;
    return 0;
}
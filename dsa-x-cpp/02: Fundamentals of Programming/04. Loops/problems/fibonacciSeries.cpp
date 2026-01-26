// ques: print the nth finonacci number.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    int firstTerm = 1;
    int secondTerm = 1;
    int lastTerm = 0;
    if (num == 1)
    {
        cout << firstTerm << ", ";
    }
    else
    {
        cout << firstTerm << ", ";
        cout << secondTerm << ", ";
    }
    for (int i = 1; i < num - 1; i++)
    {
        lastTerm = firstTerm + secondTerm;
        secondTerm = firstTerm;
        firstTerm = lastTerm;
        cout << lastTerm << ", ";
    }
    return 0;
}
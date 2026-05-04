// write a C++ program to input any character and check whether it is the alphabet, digit or special character.
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter a character: ";
    cin >> ch;
    if ((int(ch) >= 65 && int(ch) <= 90) || (int(ch) >= 97 && int(ch) <= 122))
    {
        cout << ch << " is an alphabet." << endl;
    }
    else if (int(ch) >= 48 && int(ch) <= 57)
    {
        cout << ch << " is an number." << endl;
    }
    else
    {
        cout << ch << " is a special character." << endl;
    }
    return 0;
}
// ques: wap to check wheather a character is an alphabet or not.
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter a character: ";
    cin>>ch;
    if ((int(ch) >= 65 && int(ch) <= 90) || (int(ch) >= 97 && int(ch) <= 122))
    {
        cout << ch << " is an alphabet." << endl;
    }
    else
    {
        cout << ch << " is not an alphbet." << endl;
    }
    return 0;
}
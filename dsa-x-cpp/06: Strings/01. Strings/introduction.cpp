// what are the strings and why are they used?
// string are basically char arrays
/*
importent points:
aray of characters = strings
we can print it like array or normal varibale..
it's last char is always a '\0'
if you add '\0' in your char array or in between of strings, there are some issue with printings

*/
#include <iostream>
using namespace std;
int main()
{
    // char str[] = {'a','b','c','d','e','f'};
    char str[6] = "suraj";
    for (int i = 0; i < 6; i++)
    {
        cout << str[i] << " ";
    }
    char ch = '\0'; // -> null character, invisible,
    for (int i = 0; str[i] != 0; i++)
    {
        cout << str[i] << " ";
    }
    cout<<str;
    cout << ch << endl;
}
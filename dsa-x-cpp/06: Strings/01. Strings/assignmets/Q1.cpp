#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "suraj kumar";
    int count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (i % 2 != 0)
        {
            str[i] = '#';
        }
        i++;
    }
    cout << str << endl;
    return 0;
}
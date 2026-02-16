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
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if (!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'))
            {
                count++;
            }
        }

        i++;
    }
    cout << "total number of consonents is: " << count << endl;
    return 0;
}
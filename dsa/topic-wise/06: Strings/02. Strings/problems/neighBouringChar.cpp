// ques: input a string and return the number of times neighbouring characters are different from each other..
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "enter string: ";
    cin >> str;
    int count = 0;
    int i = 0;
    if (str.size() == 1)
    {
        cout << "num of times: " << count << endl;
        return 0;
    }
    else if (str.size() == 2 && (str[0] != str[1]))
    {
        cout << "num of times: " << 1 << endl;
        return 0;
    }
    while (str[i] != '\0')
    {
        if (i == 0)
        {
            if (str[i] != str[i + 1])
            {
                count++;
            }
        }
        else if (i == str.size() - 1)
        {
            if (str[i] != str[i - 1])
            {
                count++;
            }
        }
        else
        {
            if (str[i] != str[i - 1] && str[i] != str[i + 1])
            {
                count++;
            }
        }
        i++;
    }
    cout << "num of times: " << count << endl;
    return 0;
}
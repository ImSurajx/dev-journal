// ques: print all the uppercase alphabets with their ascii value;
#include <iostream>
using namespace std;
int main()
{
    char ch = 'A';
    while (ch <= 'Z')
    {
        cout << ch << " : " << int(ch)<<endl;
        ch++;
    }
    return 0;
}
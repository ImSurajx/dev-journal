/*
ques: input a string of length less than 10 and convert it into integer without using builtin function.
input : "3244"
output : 3244
input : "12"
output : 12
*/
#include <iostream>
using namespace std;
int main()
{
    string str = "3244";
    int currRes = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        currRes = currRes * 10;
        currRes += str[i] - '0';
        ;
    }
    cout << currRes << endl;
    return 0;
}

// ques: find the second larget digit in the string consisting of digits from '0' to '9'
#include <iostream>
using namespace std;
int main()
{
    string str = "2947578";
    sort(str.begin(), str.end());
    cout << str << endl;
    cout << str[str.size() - 2] << endl;
    return 0;
}
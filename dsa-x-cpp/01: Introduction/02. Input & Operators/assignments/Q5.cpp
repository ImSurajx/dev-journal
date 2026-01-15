// ques: wap to find difference between ASCII of two characters, take them as input
#include <iostream>
using namespace std;
int main()
{
    char c1, c2;
    cout << "enter first character: ";
    cin >> c1;
    cout << "enter second character: ";
    cin >> c2;
    if (int(c1) > int(c2))
        cout << "the difference between character is: " << int(c1) - int(c2) << endl;
    else
        cout << "the difference between character is: " << int(c2) - int(c1) << endl;
    return 0;
}
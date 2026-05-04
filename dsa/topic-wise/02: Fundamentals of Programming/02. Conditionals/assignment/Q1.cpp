// ques: wap to count the minimum number of notes in a given amount using the switch statement
#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "enter amount: ";
    cin >> amount;
    int n500 = 0, n200 = 0, n100 = 0, n50 = 0, n10 = 0, n5 = 0, n2 = 0;
    switch (1)
    {
    case 1:
        n500 = amount / 500;
        amount %= 500;
    case 2:
        n200 = amount / 200;
        amount %= 200;
    case 3:
        n100 = amount / 100;
        amount %= 100;
    case 4:
        n50 = amount / 50;
        amount %= 50;
    case 5:
        n10 = amount / 10;
        amount %= 10;
    case 6:
        n5 = amount / 5;
        amount %= 5;
    case 7:
        n2 = amount / 2;
        amount %= 2;
    default:
        break;
    }

    cout << "notes of 500: " << n500 << endl;
    cout << "notes of 200: " << n200 << endl;
    cout << "notes of 100: " << n100 << endl;
    cout << "notes of 50: " << n50 << endl;
    cout << "notes of 10: " << n10 << endl;
    cout << "notes of 5: " << n5 << endl;
    cout << "notes of 2: " << n2 << endl;
    cout << "total number of notes: " << n500 + n200 + n100 + n50 + n10 + n5 + n2 << endl;
    return 0;
}
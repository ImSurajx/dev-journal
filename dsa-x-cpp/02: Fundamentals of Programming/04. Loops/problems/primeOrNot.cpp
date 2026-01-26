// ques: wap to check if a number is prime or not
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    int count = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (num % i == 0)
            count++;
    }
    if (count == 2)
        cout << num << " is a prime number" << endl;
    else
        cout << num << " is a composite number." << endl;
    return 0;
}
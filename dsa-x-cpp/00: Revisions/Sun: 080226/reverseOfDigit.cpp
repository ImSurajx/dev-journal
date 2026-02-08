#include <iostream>
using namespace std;
int main()
{
    // input: we tak a digit as input, & create some extra varibles for while loop, lastdigit, revernum etc.
    // what repeats: last digit calculation, adding & multiplication of digit into reverdigit, decreasing the real digit by dividing by 10 on each itration.
    // what changes every iteration: reversedigit value, lastdigit value, or real number to stop loop.
    // when loop stops: when the original digit become zero or less than 10.
    // final output: revere of the input digit.
    // Reverse a number using while loop
    // Pattern: digit extraction + number building

    int num;
    cout << "enter a number:  ";
    cin >> num;
    int temp = num;
    int revNum = 0;
    while (temp > 0)
    {
        int digit = temp % 10;
        revNum = revNum * 10 + digit;
        temp /= 10;
    }

    cout << revNum;
    cout << num << " reverse of the following number is: " << revNum << endl;
    return 0;
}
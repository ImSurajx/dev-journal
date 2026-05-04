// loop: when we want to do something on repeat mode, like printing something n times etc, like repeat work it will do till our conditions fails.
// for loop: when we know from where our loop will start & goes till in that case we use for loop.
// while loop: when we don't most of thing like little bit of information is given in question we use while loop.
// do-while loop: this loop always run one time even if condition is false.
#include <iostream>
using namespace std;
int main()
{
    // for loop
    for (int i = 0; i < 5; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    // while loop
    int x = 10;
    while (x > 0)
    {
        cout << x << " ";
        x--;
    }
    cout << endl;
    // do while
    int y = 10;
    do
    {
        cout << y << " ";
        y--;
    } while (y > 10);
    cout << endl;

    return 0;
}

// problem: predict the output
#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while (i <= 5) {
        cout << i << " "; // it will print f odd number till <= 5, which is 1 3, 5
        i += 2;
    }
}

// problem: predict output
#include <iostream>
using namespace std;

int main() {
    int i = 1;

    do {
        cout << i << " "; // print 1, no matter what even if condtion fail i will run one time.
        i++;
    } while (i < 1);
}

// problems: count the number of digits in an integer.
#include <iostream>
using namespace std;
int main()
{
    int num = 5832; // initial number
    int count = 0; // count used to count the numbe of digit
    while (num > 0) // loop will run until num > 0 & if we use >= that mean infinte loop b/c if we our last value is any number less than 10 it will return 0 after divide from 10 because it's integer
    {
        num /= 10; // each time decrease number by 10th place like if it's 1000 make it 100 then 10 then 1 then 1/10 = 0
        count++;
    }
    cout << "number of digits are: " << count << endl;
    return 0;
}

// problems: reverse a given integer.
#include <iostream>
using namespace std;
int main()
{
    int num = 5832;
    int revNum = 0; // to store reverse of number, it must start from 0 so when we multiply 10 it become again 0
    int digit = 0; // to store digit we doesn't need it now
    while (num > 0) // same condition like above
    {
        // digit = num % 10; // we use temp varible to hold the value of digit
        revNum = revNum * 10 + num % 10; // algo is 0 * 10 + 2 -> 2 * 10 + 3 -> 23 -> 23 * 10 + 8 -> 238 * 10 + 5 -> 2385
        num /= 10; // reduce number by 10 same like above
    }
    cout << "reverse of number is: " << revNum << endl;
    return 0;
}

// problem: find the sum of digits of a number.
#include <iostream>
using namespace std;
int main()
{
    int num = 5832;
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10; // extract one digit at a time add it into sum, sum must start from 0.
        num /= 10;
    }
    cout << "sum of digit is: " << sum << endl;
    return 0;
}

// problem:
// *
// * *
// * * *
// * * * *
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <=  4; i++) // this loop is for row
    {
        for (int j = 1; j <= i; j++) // this loop print each column, each time j will run i times that mean on i'th row i stars
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

// problem:
// 1
// 1 2
// 1 2 3
// 1 2 3 4
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <=  4; i++) // this loop is for row
    {
        for (int j = 1; j <= i; j++) // this loop print each column, each time j will run i times that mean on i'th row i numbers
        {
            cout <<j<<" "; // each time we are printing value of j because on each row it's reseting to 1 & goes till i.
        }
        cout << endl;
    }
    return 0;
}

// problems:
// 1
// 2 3
// 4 5 6
// 7 8 9 10
#include <iostream>
using namespace std;
int main()
{
    int a = 1; // we use a extra varible to get this pattern, most of the we try to avoid modifcation of itrator variable.
    for (int i = 1; i <=  4; i++) // this loop is for row
    {
        for (int j = 1; j <= i; j++) // this loop print each column, each time j will run i times that mean on i'th row i numbers
        {
            cout <<a++<<" "; // each time we are printing value of a because on each row it's reseting to 1 & goes till i.
        }
        cout << endl;
    }
    return 0;
}
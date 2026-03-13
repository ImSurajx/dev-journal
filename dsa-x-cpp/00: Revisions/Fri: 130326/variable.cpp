// What is a variable?
// in a programming langauge varible is used to store a data on a memory location so varible is whom which store address of memory where we store our data.

// Why do we need variables in programming?
// because in any system which we are creating we have to store data without storing data into memory we can't imagine a system even if we are building something temporary so that't the reason behind it we need varibles to store our data.

// Write the syntax for declaring variables of these types:
#include <iostream>
using namespace std;
int main()
{
    int num = 10;
    float real = 9.0;
    char ch = 'a';
    bool flag = true;
    return 0;
}

// predict the output
#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    float b = 2.5;
    char c = 'A';

    cout << a + b << endl; // 7.5
    cout << a + c << endl; // 70
}

// Explain type casting.
// type casting is a process where we use the value of same data in different data type without converting it, like we have char(a) where a is 65 so it will show it as A, in c++ if we are adding two data types then the smaller one convert into the bigger one.
#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 2;

    cout << a / b << endl;        // 2
    cout << (float)a / b << endl; // 2.5 we typecast the upcoming value.
}
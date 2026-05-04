// if: we use if to change flow of code, the code written inside if block only runs if the condition is true.
// if-else: it's same like if but also has a option if block conditions return false else block code will run
// nested if: mean we are use if inside a like callback chaning same nested but here if block only runs if condition is true.

#include <iostream>
using namespace std;
int main()
{
    if (true)
    {
        // do this
    }

    if (false)
    {
    }
    else
    {
        // do this
    }
    if (true)
    {
        if (true)
        {
            if (true)
            {
                // do this.
            }
        }
    }
    return 0;
}

// problem: predict the output
#include <iostream>
using namespace std;

int main()
{
    int x = 10;

    if (x > 5)           // x is greater than 5 -> true go inside block
        if (x > 8)       // x is greater than 8 -> true go inside block
            cout << "A"; // print A
        else
            cout << "B";
}

// problem: predict output
#include <iostream>
using namespace std;

int main()
{
    int x = 5;

    if (x = 10)         // it's assignment so here we are assigning 10 into x that mean the real thing theory so it's will give true for it.
        cout << "True"; // print True.
    else
        cout << "False";
}
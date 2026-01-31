/*
========================
FUNCTIONS IN C++ (SHORT NOTES WITH EXAMPLES)
========================

1. What is a function?
- A function is a block of code that performs a specific task.
- It helps break a program into smaller parts.

Example:
int add(int a, int b)
{
    return a + b;
}

------------------------------------------------

2. Why use functions?
- Avoids repetition
- Improves readability
- Easy debugging

Example:
add(5, 3);   // reuse function

------------------------------------------------

3. Types of functions

a) Built-in functions
- Provided by C++
Example:
sqrt(16);    // returns 4

b) User-defined functions
- Created by programmer

Example:
void greet()
{
    cout << "Hello";
}

------------------------------------------------

4. Function declaration (prototype)
- Informs compiler before use

Example:
int add(int, int);

------------------------------------------------

5. Function definition
- Actual implementation

Example:
int add(int a, int b)
{
    return a + b;
}

------------------------------------------------

6. Function call
- Executes function

Example:
int sum = add(10, 20);

------------------------------------------------

7. Return type
- Defines value returned by function
- void means no return value

Example:
void printMsg()
{
    cout << "No return value";
}

------------------------------------------------

8. Parameters vs Arguments
- Parameters: variables in function
- Arguments: actual values passed

Example:
add(4, 6);
// a, b → parameters
// 4, 6 → arguments

------------------------------------------------

9. Call by Value
- Copy of data passed
- Original value unchanged

Example:
void change(int x)
{
    x = 100;
}
// original variable not affected

------------------------------------------------

10. Call by Reference
- Address passed
- Original value changes

Example:
void change(int &x)
{
    x = 100;
}

------------------------------------------------

11. Function Scope
- Variables inside function are local

Example:
void test()
{
    int x = 5;  // local variable
}

------------------------------------------------

12. Advantages of Functions
- Reusability
- Modular programming
- Easy maintenance

========================
END
========================
*/
#include <iostream>
using namespace std;
// function creation
void greeting()
{
    cout << "Hello, How are you?" << endl;
    cout << "Have a nice day" << endl;
}
// function with arguments
void starTriangle(int x)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
// first one to run,
int main()
{
    // function calling.
    greeting();
    greeting();
    greeting();
    starTriangle(4);
    starTriangle(8);
    starTriangle(6);
    return 0;
}
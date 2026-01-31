/*
========================================================
DEFAULT ARGUMENTS IN C++ (WITH DATA TYPES & EDGE CASES)
========================================================

1. Passing different data types as arguments
- Default arguments can be of any data type
- They must match the parameter type

------------------------------------------------

Example 1: int default value
int multiply(int a, int b = 2)
{
    return a * b;
}

multiply(5);      // b = 2 → result = 10
multiply(5, 4);   // b = 4 → result = 20

------------------------------------------------

Example 2: float / double default value
double power(double base, double exp = 2.0)
{
    return pow(base, exp);
}

power(3);        // exp = 2.0
power(3, 3);     // exp = 3.0

------------------------------------------------

Example 3: char default value
void printChar(char ch = 'A')
{
    cout << ch;
}

printChar();     // prints A
printChar('Z');  // prints Z

------------------------------------------------

Example 4: string default value
void greet(string name = "Guest")
{
    cout << "Hello " << name;
}

greet();          // Hello Guest
greet("Suraj");   // Hello Suraj

------------------------------------------------

2. Edge cases & important points

------------------------------------------------

Edge Case 1: Mixing default & non-default arguments
- Default arguments must be at the rightmost side

Example:
void func(int a, int b = 5, int c = 10);   // ✅ valid
void func(int a = 5, int b, int c);       // ❌ invalid

------------------------------------------------

Edge Case 2: Default values with function declaration & definition
- Default arguments should be given only once
- Prefer in function declaration (prototype)

Example:
void show(int x = 10);   // default here

void show(int x)         // ❌ do not repeat default
{
    cout << x;
}

------------------------------------------------

Edge Case 3: Default arguments with overloading
- May cause ambiguity

Example:
void test(int x);
void test(int x = 10);   // ❌ ambiguous

------------------------------------------------

Edge Case 4: Default arguments with reference parameters
- Default value must be a valid lvalue

Example:
void update(int &x = someVar);   // allowed if someVar exists

------------------------------------------------

Edge Case 5: Default arguments are compile-time
- Default values are fixed at compile time
- They do not change dynamically

------------------------------------------------

3. Key rules to remember

- Default arguments work from right to left
- They reduce function overloading
- Avoid overuse to prevent confusion
- Use when function behavior is logically optional

*/
#include <iostream>
using namespace std;
void func(int x = 7, int y = 8) 
// default values of formal arguments
{
    cout<<x<<", "<<y;
}
int main()
{
    int x;
    int y;
    func(x, y); // argument given as input, is known as actual paramenters
    return 0;
}
// What is a function?
// While writing code our codebase become bigger & bigger but in that code base there are some code which repeat itself for example like we define swaping multiple times so what we do we just define a swap function & just call it when need it, through this our code got clean & a clean structure.

// Why do we use functions?
// to avoid the use of same peace of code multiple times also convert a large codebase into smaller part, like modular coding where we divide a large code files into modules, this make our code clean or easy to read & understand.

// ques:  write a function in C++ that returns the maximum of two numbers.
#include <iostream>
using namespace std;
// our function type is int b/c it's returning a integer
int returnMax(int a, int b)
{ // these are the parameters which function take as argument.
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    // calling a function & storing that value into max why max is a interger b/c here returnMax function return a integer value.
    // what returnMax do? why we are putting some value inside it b/c when we define our function we give it two parameter & both of them are integer, so we have to pass two values as both of them must be integer.
    int max = returnMax(10, 5);        // the value we pass while calling a function is knowing as arguments
    cout << "max is: " << max << endl; // we are printing the value which is return from function & we store it in max varible.
    return 0;
}

// ques: predict the output
#include <iostream>
using namespace std;

void test(int x) // here we can see we are taking integer parameter which mean it's not a pointer so there is no change in orginal value.
{
    // here x is a sperate varible which is only availble inside this function.
    x = x + 5; // this function type is void which mean there is no value which is returning & maybe it's doing modification in exisitng value
}

int main()
{
    int a = 10; // declare a & init with value 19;
    test(a);    // pass a to function
    cout << a;  // print a which is 10, why 10 not 15, because here when we pass a it's pass by value not pass by reference it send it a shalow copy not orginal one so no modificaion in original value.
}
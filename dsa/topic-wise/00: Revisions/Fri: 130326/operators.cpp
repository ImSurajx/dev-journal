// Arithmetic operators
// these are the same like our math ones use to perform basic arithmetic operations
// +, -, *, /, %
// rest of them do the same work except % -> it used to return remainder

// Relational operators
// >= <= > < == !=
// relational operator used to compare two values & it's answer always will be true/false.

// Logical operators
// && -> use to compare two or more condition, if first ones fails second one will not check & also if all condition must be true to get true as return, for false any one condition must be false

// || -> use to compare two or more condition, if first ones is true, will not check rest of the conditions & any one condition must be true to get true as response for false all condition must be false,

// Problem 1:
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 3;

    cout << a % b << endl; // gives remainder: 1
    cout << a / b * b + a % b << endl; // a/b*b -> 9, + a%b -> 1 = 9 + 1 = 10
}

// Problem 2:
#include <iostream>
using namespace std;

int main() {
    int x = 5;

    cout << x++ << endl; // post increment: first use then increase, 5
    cout << ++x << endl; // pre increment: first increment then use, 7
}


// ques: given the marks of the student. if marks are geater than 33 print the result as pass otherwise fail without using if-else statement.
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "enter marks: ";
    cin >> marks;
    (marks >= 33) ? cout << "pass" : cout << "fail";
    return 0;
}
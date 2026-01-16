// ques: take input percentage of a student and print the grace according to marks.
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "enter marks percentage: ";
    cin >> marks;
    if (marks >= 91 && marks <= 100)
        cout << "Excellent" << endl;
    else if (marks >= 81 && marks <= 90)
        cout << "Very Good" << endl;
    else if (marks >= 71 && marks <= 80)
        cout << "Good" << endl;
    else if (marks >= 61 && marks <= 70)
        cout << "Can Do Better" << endl;
    else if (marks >= 51 && marks <= 60)
        cout << "Average" << endl;
    else if (marks >= 40 && marks <= 50)
        cout << "Below Average" << endl;
    else if (marks >= 0 && marks < 40)
        cout << "Fail" << endl;
    else
        cout << "Invalid Input." << endl;
    return 0;
}
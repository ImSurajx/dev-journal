// ques: given an array of marks of students, if the mark of any student is less than 35 print its roll number.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter no of students: ";
    cin >> n;
    int arr[n];
    // taking input;
    cout << "enter marks of student: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // giving output;
    cout << "student who had less marks: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 35)
        {
            cout << i << " : " << arr[i] << endl;
        }
    }
    return 0;
}
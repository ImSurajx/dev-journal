// Predict the output of the following code snippet.
#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 20;
    int *ptr;
    *ptr = 5; // zsh: bus error
    cout << *ptr << " " << ptr << endl;
    return 0;
}
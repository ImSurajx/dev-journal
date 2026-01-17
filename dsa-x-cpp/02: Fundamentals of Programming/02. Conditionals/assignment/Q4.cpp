#include <iostream>
using namespace std;
int main()
{
    int test = 0;
    cout << "First character " << '1' << endl;
    cout << "Second character " << (test ? 3 : '1') << endl; // 49 - reason: ternary typecast according to first element whichever is the bigger datatype.
    return 0; 
}
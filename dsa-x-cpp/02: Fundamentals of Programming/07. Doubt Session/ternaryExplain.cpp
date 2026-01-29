#include <iostream>
using namespace std;
int main()
{
    cout << (0 ? 3 : '1') << endl; 
    cout<<(-4>0? 'p': 'N');
    // why output is 49?
    // In the ternary operator, both expressions must resolve to a common data type.
    // If the data types differ, C++ performs implicit type promotion.
    // Smaller types like char are promoted to int.
    // Therefore, character literals return their ASCII values when promoted.
    return 0;
}
#include <iostream>
using namespace std;
int product(int a, int b)
{
    return a * b;
}
void greet()
{
    cout << "good morning, how are you?" << endl;
}
void hello()
{
    cout << "Hello, EveryOne." << endl;
    greet();
}
int main()
{
    hello();
    return 0;
}
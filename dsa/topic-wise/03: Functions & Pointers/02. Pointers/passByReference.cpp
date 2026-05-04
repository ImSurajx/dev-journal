#include <iostream>
using namespace std;
void swap(int *a, int *b)  // pass by reference using pointer
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    cout << "a is: " << *a << endl;
    cout << "b is: " << *b << endl;
}
int main()
{
    int a, b;
    cout << "enter a & b: ";
    cin >> a >> b;
    swap(&a, &b);
    return 0;
}
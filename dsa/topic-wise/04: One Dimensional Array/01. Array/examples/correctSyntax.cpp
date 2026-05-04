/*
ques: are the following array declarations correct?
int a(25);
int size = 10, b[size];
int c = {0,1,2};
*/
#include <iostream>
using namespace std;
int main()
{
    int a(25);              // wrong
    int size = 10, b[size]; // correct
    int c = {0, 1, 2};      // wrong
    return 0;
}
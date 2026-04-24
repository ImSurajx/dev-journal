#include <iostream>
using namespace std;
int getDigit(int n)
{
    if(n==0 || n < 0) return 0;
    return 1 + getDigit(n/10);
}

int main(){
    int count = getDigit(12345);
    cout<<count<<endl;
}
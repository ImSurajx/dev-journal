// ques: print n to 1
#include<iostream>
using namespace std;
void printNtoOne(int n){
    if(n==0) return;
    cout<<n<<" ";
    printNtoOne(n-1);
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    printNtoOne(n);
    return 0;
}
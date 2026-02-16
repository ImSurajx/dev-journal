#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "suraj kumar";
    cout<<str<<endl;
    
    // taking input(cin): space or enter seprate string, so it create a issue..
    // cin>>name -> suraj kumar
    // but name = suraj.
    string name;
    getline(cin,name); // to take string input with spaces
    cout<<name;
    return 0;
}
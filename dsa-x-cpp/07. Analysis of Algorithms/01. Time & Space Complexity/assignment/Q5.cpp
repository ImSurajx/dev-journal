// ques: calulate the time complexity for the following code snippet
// time complexity: O(n);
// space complexity: O(1);
#include<iostream>
using namespace std;
int main(){
    int c = 0, n = 10;
    for(int i = 0; i < n;  i++){
        c += i;
    }
    return 0;
}
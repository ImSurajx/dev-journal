// ques: what will be the space complexity if we just traverse without creating any array?
// space complexity: O(1);
// time complexity: O(n);
#include<iostream>
using namespace std;
int main(){
    int n = 10;
    int c = 0;
    for(int i = 0; i < n; i++){
        c++;
    }
    return 0;
}
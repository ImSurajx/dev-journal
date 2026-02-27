// ques: calculate the time complexity for the following code snippet..
// t.c: O(n)...
#include<iostream>
using namespace std;
int main(){
    int c = 0, n = 10;
    for(int i = 1; i < n; i += i){
        for(int j = 0; j < i; j++){
            c++;
        }
    }
    return 0;
}
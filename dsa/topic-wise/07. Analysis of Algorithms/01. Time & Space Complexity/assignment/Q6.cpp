// ques: calulate the time complexity for the following code snippet
// time complexity: O(n^3);
// space complexity: O(1);
#include<iostream>
using namespace std;
int main(){
    int c = 0, n = 10;
    for(int i = 1; i < n;  i++){
        for(int j = 0; j < i; j++){
            c++;
        }
    }
    return 0;
}
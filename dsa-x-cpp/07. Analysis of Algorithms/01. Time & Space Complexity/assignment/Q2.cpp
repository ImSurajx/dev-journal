// ques: calulate the time complexity for the following code snippet
// time complexity: O(1);
// space complexity: O(1)
#include<iostream>
using namespace std;
int main(){
    int c = 0, n = 10;
    for(int i = n; i > 1;  i /= i){
        c++;
    }
    return 0;
}
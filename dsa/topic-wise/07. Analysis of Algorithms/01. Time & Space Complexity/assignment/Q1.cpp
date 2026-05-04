// ques: calulate the time complexity for the following code snippet
// time complexity: O(log n);
// space complexity: O(1)
#include<iostream>
using namespace std;
int main(){
    int c = 0, n = 10;
    for(int i = n; i > 0;  i /= 2){
        c++;
    }
    return 0;
}
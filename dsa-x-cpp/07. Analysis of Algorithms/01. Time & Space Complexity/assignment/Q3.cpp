// ques: calculate the time complexity for the following code snippet where k is some constant (k<<n);
// time complexity: O(n/k) -> O(n);
// space complexity: O(1)
#include<iostream>
using namespace std;
int main(){
    int c = 0, n = 10, k = 2;
    for(int i = 0; i < n;  i += k){
        c++;
    }
    return 0;
}
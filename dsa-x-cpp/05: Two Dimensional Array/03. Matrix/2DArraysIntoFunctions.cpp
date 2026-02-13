#include <iostream>
#include <vector>
using namespace std;
void change (int a[]){
    a[0] = 9;
}
void change2D (int a[][3]){ // while passing 2d array in function we have to pass it's size to else it will give error
    a[0][0] = 100;
}
int main()
{
    int a[3] = {1,2,3};
    cout<<a[0]<<endl;
    change(a);
    cout<<a[0]<<endl;
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<arr[0][0]<<endl;
    change2D(arr); 
    cout<<arr[0][0]<<endl;
    return 0;
}
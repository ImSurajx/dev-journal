#include <iostream>
using namespace std;
int main()
{
    /*
    - what is a 2D array?
        2D array is a array which stores array, in each row it have a array, that's why it's also known as array or arrays.
    - syntax & declaration
        int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
        int arr[3][3] = {1,2,3,4,5,6,7,8,9};
        int arr[][3] = {1,2,3,4,5,6,7,8,9}; -> column is compulsory
    - how input works: we traverse in each row, & with in each row we also traverse each row columns.
        int arr[3][3];
        for(int i = 0; i < 3; i++){ // for row
            for(int j = 0; j < 3; j++){ // for column
                cin>>arr[i][j]; // put value at i'th row & j'th column
            }
        }
    - how traversal works: two type of traversl one is row wise one is column wise
        - row wise: when we traverse first in row with it's column elements.
            for(int i = 0; i < m; i++){ // row
                for(int j = 0; j < n; j++){ // column
                    cout<<arr[i][j];
                }
            }
        - col wise: when we traverse first in col with it's rows elements.
            for(int i = 0; i < n; i++){ // column
                for(int j = 0; j < m; j++){ // row
                    cout<<arr[i][j];
                }
            }
    - how row-wise traversal differs from column-wise
        - row-wise traversl outer loop traverse in row & inner in columns on the other hand col wise traversal outer loop traverse in columns & inner in row.

    - how transpose works (logic only)
        - transpose:
            - create two array with different order one with mxn or one with nxm
            - we will traverse in nxm & store element of mxn using their indices
            - ex what we will do brr[i][j] wher i is row of tranpose array & j is col
            - in which we will store arr[j][i]

    - how rectangle sum works (concept only)
        - declare a varible name sum with initial value = 0;
        - traverser in rows from l1 to given l2 & traverse col r1 to given r2 element of 2D array;
        - add that element into sum like sum+=arr[i][j];
        - at the end print the sum;
    */
    return 0;
}
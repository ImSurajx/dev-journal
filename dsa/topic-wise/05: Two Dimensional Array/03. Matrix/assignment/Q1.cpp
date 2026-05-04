// ques: given an mxn integer matrix, if an element is 0, set it's entire row and columns to 0's
#include <iostream>
using namespace std;
int main()
{
    // sample input: {0,1,2,0},{3,4,5,2},{1,3,1,5}
    vector< vector<int> > matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    int rows = matrix.size();
    int cols = matrix[0].size();
    // storing position of zero in seprate array in the form of (i,j)
    vector<int>v; 
    for(int i=0; i<rows; i++){
        for(int j =0; j < cols; j++){
            if(matrix[i][j]==0){
                v.push_back(i);
                v.push_back(j);
            }
        }
    }
    // making i'th row or j'th cols zero
    for(int i = 0; i < v.size(); i+=2){
        // for rows
        for(int k = 0;  k < rows; k++){
            matrix[k][v[i+1]] = 0;
        }
        // for cols
        for(int k = 0; k < cols; k++){
            matrix[v[i]][k] = 0;
        }
    }
    // printing matrix
    for(int i=0; i<rows; i++){
        for(int j =0; j < cols; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
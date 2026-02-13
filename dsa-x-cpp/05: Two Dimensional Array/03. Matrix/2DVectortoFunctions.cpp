#include <iostream>
#include <vector>
using namespace std;
void change2DVector(vector<vector<int>> &v)
{ 
    // no size is needed to pass into functions...
    v[0][0] = 100;
}
int main()
{
    vector<int> v1; // 1 2 3
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    vector<int> v2; // 4 5
    v2.push_back(4);
    v2.push_back(5);
    vector<int> v3;
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(0);
    vector<vector<int>> v; // 2D Vector -> cant push integer b/c it's vector of vectors
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    change2DVector(v);
    cout << v[0][0] << endl;
    return 0;
}
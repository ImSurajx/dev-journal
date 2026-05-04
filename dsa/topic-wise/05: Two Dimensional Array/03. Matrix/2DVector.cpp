#include <iostream>
#include <vector>
using namespace std;
int main()
{
    /*
    2D Vector:
    - size dynamic
    - increase your rows
    - varibale columns -> importent
    */
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
    // cout<<v[1][1]<<endl;
    // cout<<v[0][0]<<endl;
    // cout<<v[2][4]<<endl;
    // cout<<v[0][3]<<endl; // error -> invalid
    cout << v[0].size() << endl;
    cout << v[1].size() << endl;
    cout << v[2].size() << endl;
    return 0;
}
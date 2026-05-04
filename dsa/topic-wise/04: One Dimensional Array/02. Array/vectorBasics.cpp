#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v; // you do not need to mention the size.
    // on each push back vector check the capacity of it, if it's full it's double it's capacity.

    // inserting / input, do not use []
    v.push_back(6);
    v.push_back(9);
    v.push_back(1);
    v.push_back(4);
    v.push_back(5);
    cout << v.capacity() << endl; // capacity increase with each element
    cout << v.size() << endl; // no of elemenets in the vector
    // if you want to update / access
    cout << v[0] << " ";
    cout << v[1] << " ";
    cout << v[2] << " ";
    cout << v[3] << " ";
    return 0;
}
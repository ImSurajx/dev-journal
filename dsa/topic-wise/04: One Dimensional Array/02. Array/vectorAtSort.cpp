#include <iostream>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout << "enter size of array: ";
    cin >> n;
    // taking input in vector
    cout << "enter elements of vector: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cout<<"elements are: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
    cout<<v.at(2)<<endl; // print values of particular index using vector_name.at(index), also we can update too.
    return 0;
}
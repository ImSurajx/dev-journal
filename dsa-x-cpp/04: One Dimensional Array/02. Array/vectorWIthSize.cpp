#include <iostream>
using namespace std;
int main()
{
    // vector<int> v(5, 7); // initial size of vector is 5 & each element is 7.
    // cout << v.size() << endl;
    // cout << v.capacity() << endl;
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
    cout<<"elements are: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
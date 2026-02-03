// passing vector into functions
#include <iostream>
using namespace std;
void change(vector<int> v) // if we use &v -> it become pass by reference
{
    v[0] = 100;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
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
    cout << "elements are: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    change(v); // original array is not changing so vector is pass by value, means create a copy of vector,
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
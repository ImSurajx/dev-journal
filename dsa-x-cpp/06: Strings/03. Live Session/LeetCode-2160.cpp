#include <iostream>
using namespace std;

int minimumSum(int num)
{
    vector<int> v;
    v.push_back(num % 10);
    num /= 10;
    v.push_back(num % 10);
    num /= 10;
    v.push_back(num % 10);
    num /= 10;
    v.push_back(num % 10);
    num /= 10;
    sort(v.begin(), v.end());
    int miniSum = (v[0] * 10 + v[2]) + (v[1] * 10 + v[3]);
    return miniSum;
}

int main()
{
    int num;
    cout << "enter four digit number: ";
    cin >> num;
    int minSum = minimumSum(num);
    cout << "sum of minimum digits: " << minSum << endl;
}
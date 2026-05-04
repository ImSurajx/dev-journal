// ques: sort the array in descending order using bubble sort
#include <iostream>
using namespace std;
void bubbleSort(vector<int> &v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = 0; j < v.size() - 1 - i; j++)
        {
            if (v[j] < v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
}
int main()
{
    vector<int> v = {9, 8, 6, 4, 2, 3, 1, 5, 7};
    bubbleSort(v);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    return 0;
}
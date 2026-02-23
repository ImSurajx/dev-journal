// ques: calculate the t.c for this given code
// t.c: n^2
 #include <iostream>
using namespace std;
int main()
{
    int n = 9;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}
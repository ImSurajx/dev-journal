#include <iostream>
using namespace std;
int main()
{
    // each next square is: diffrence b/w it & next square + odd 
    int start, end;
    cout << "enter start & end point: ";
    cin >> start >> end;
    int num = 1, oddNum = 3;
    cout << "perfect square are: ";
    while (num <= end)
    {
        if (num >= start)
        {
            cout << num << " ";
        }
        num = num + oddNum;
        oddNum += 2;
    }
    return 0;
}
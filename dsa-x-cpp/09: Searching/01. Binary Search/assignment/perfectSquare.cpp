// // Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.
// Input 1: n = 36
// Output 1: yes
// Input 2: n = 45
#include <iostream>
using namespace std;
bool almostPerfectSquare(int target)
{
    int low = 0;
    int high = target;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if ((long long int)mid * mid == target)
        {
            return true;
        }
        if ((long long int)mid * mid < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return false;
}
int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    bool flag = almostPerfectSquare(num);
    flag ? cout << "Yes" << endl : cout << "No" << endl;
    return 0;
}
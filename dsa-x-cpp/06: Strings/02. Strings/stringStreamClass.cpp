// string stream class:
// - extract word by word...
// - suraj is a good boy -> suraj, is, a, good, boy
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    string str = "suraj   is   a  good boy.";
    stringstream strSort(str);
    string temp;
    while (strSort >> temp) // transfering value from strSort to temp till all values transferd.
    {
        // suraj
        // is
        // a
        // good
        // boy.
        cout << temp << endl;
    }
    return 0;
}
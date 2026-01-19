#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    do
    {
       cout<<i<<endl;
       i++;
        /* atleast run one time even if conditions fail */
    } while (i<=0);
    
    return 0;
}
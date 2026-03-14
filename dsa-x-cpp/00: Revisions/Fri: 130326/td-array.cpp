// ques: What does this mean?
// int arr[3][4]; -> create a array of arrays which mean 3 array with each one of size 4
// rows: three rows
// columns: four columns* required without this you will get an error
// total elements: 3 x 4 which is 12

// predict the output:
#include <iostream>
using namespace std;
int main()
{
    // creating a 2d array which contain 2 arrays of each of them of size 3.
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    cout << arr[1][2]; // 1st row, 2nd col. which is 5
    return 0;
}

// how many element exist here
// int arr[4][5]; // 20 elements

// ques: take a 3×3 matrix as input print the sum of all elements
#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << "sum is: " << sum << endl;
    return 0;
}

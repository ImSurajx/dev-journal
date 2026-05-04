#include <iostream>
using namespace std;
int main()
{
    /*
    algorithm:
    we have to make each row max in binary using fliping
    for that:
        - if any rows start with zero flip that row, first row must be 1, so num can be max
        - if any col contain more zeros as compare to ones then flip that too..
    now next step is binary to real number conversion
    for that there is simple concept:
    like if number is 1 1 1 1
    how do we convert?
    3 2 1 0 -> array idx imaginary
    1 1 1 1 -> binray number
    8 4 2 1 -> it just the result of 2^idx
    now multiply binary num * 2^idx that we got for each element
    */
    vector<vector<int>> grid = {{0, 0, 1, 1}, {1, 0, 1, 0}, {1, 1, 0, 0}};
    int rows = grid.size();
    int cols = grid[0].size();
    cout << "matrix is: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; i++)
    {
        // any rows who start with zero flip that row
        if (grid[i][0] == 0)
        {
            for (int j = 0; j < cols; j++)
            {
                if (grid[i][j] == 0)
                    grid[i][j] = 1;
                else
                    grid[i][j] = 0;
            }
        }
    }
    cout << "matrix is: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    for (int j = 0; j < cols; j++)
    {
        int noz = 0;
        int noo = 0;
        for (int i = 0; i < rows; i++)
        {
            if (grid[i][j] == 0)
                noz++;
            else
                noo++;
        }
        if (noz > noo)
        {
            for (int i = 0; i < rows; i++)
            {
                if (grid[i][j] == 0)
                    grid[i][j] = 1;
                else
                    grid[i][j] = 0;
            }
        }
    }
    // print matrix
    cout << "matrix is: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    // convert binary to real nums...
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        int x = 1; // reset each time, for each rows
        for (int j = cols - 1; j >= 0; j--)
        {
            sum += grid[i][j] * x;
            x *= 2; // 2^idx
        }
    }
    cout << "max score is: " << sum << endl;
    return 0;
}
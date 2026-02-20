#include <iostream>
using namespace std;

int maxArea(vector<int> &height)
{
    int i = 0;
    int j = height.size() - 1;
    int maxArea = 0, area;
    while (i < j)
    {
        if (height[i] < height[j])
        {
            area = height[i] * (j - i);
            i++;
        }
        else
        {
            area = height[j] * (j - i);
            j--;
        }
        if (area > maxArea)
            maxArea = area;
    }
    return maxArea;
}

int main()
{
    vector<int> arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int area = maxArea(arr);
    cout << "max area which containes water: " << area << endl;
    return 0;
}
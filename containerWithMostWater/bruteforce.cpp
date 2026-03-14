#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class solution
{
public:
    int containerWater(vector<int> &arr)
    {
        int n = arr.size();
        int area = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; j > i ; j--)
            {
                int width = j - i;
                int height = min(arr[i], arr[j]);
                int currarea = width * height  ;
                area = max(currarea, area);
            }
        }
        return area;
    }
};

int main()
{
    solution mySolution ;
    vector<int> height = {1, 8, 6, 2, 5, 4, 8 , 3, 7};
    int result = mySolution.containerWater(height);
    cout << " Container Containing Most Water " << result << endl;
    return 0;
}

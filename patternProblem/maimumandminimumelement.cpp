#include <iostream>
#include <climits>
using namespace std;

int getMax(int nums[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
    }
    return max  ;
}
int getMin(int nums[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < min)
        {
            min = nums[i];
        }
    }
    return  min  ;
}
int main()
{
    int size;
    cout << "Enter the Size of the array :- ";
    cin >> size;

    int nums[100];
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    cout << "Maximum  number is :- " << getMax(nums, size) << endl;
    cout << "Minimum number is  :- " << getMin(nums, size) << endl;
}
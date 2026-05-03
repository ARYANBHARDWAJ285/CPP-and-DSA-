#include <iostream>
#include <algorithm>

using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void swapArray(int arr[], int n)
{
    for (int i = 0; i + 1 < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter in the loop " << endl;

    swapArray(arr, n);
    printArray(arr, n);

    return 0;
}
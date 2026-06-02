#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number of the elemetn in array :- ";
    cin >> n;
    int arr[n];
    cout << "Enter the Value of the array  :- ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // bubble sort

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Array  is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
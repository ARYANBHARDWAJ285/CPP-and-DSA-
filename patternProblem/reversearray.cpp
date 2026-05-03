#include <iostream>
using namespace std;

//  reversing the array

void reverse(int arr[], int size)
{
    cout << "Reversing the array " << endl;
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
}

//  calling to the main functions

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8 };

    int size = sizeof(arr) / sizeof(arr[0]);

    reverse(arr, size);

    cout << endl;
    return 0;
}



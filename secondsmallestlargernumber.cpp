#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the arrar : ";
    cin >> n;
    cout << "Enter the element of the array :- ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int mini;
    int max;
    int secondMini;
    int secondMax;

    if (arr[0] < arr[1])
    {
        mini = arr[0];
        secondMini = arr[1];
    }
    else
    {
        mini = arr[1];
        secondMini = arr[0];
    }

    if (arr[0] > arr[1])
    {
        max = arr[0];
        secondMax = arr[1];
    }
    else
    {
        max = arr[1];
        secondMax = arr[0];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
            secondMini = mini;
        }
        else if (arr[i] < secondMini && arr[i] != mini)
        {
            secondMini = arr[i];
        }
        else if (arr[i] > max)
        {
            max = arr[i];
            secondMax = max;
        }
        else if (arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }

    cout << "Second max " << secondMax;
    cout << endl
         << "max " << max;
    cout << endl
         << " Second Mini " << secondMini;
    cout << endl
         << "mini" << mini;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the element of the arrary :- ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int mini = arr[0];
    int max = arr[0];
    int secondMini  ;
    for (int i = 0; i < n; i++)
    {
        
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
        else if (arr[i] > max)
        {
            max = arr[i];
        }
        
        else if ( mini <  secondMini && secondMini <  arr[i])
        {
                secondMini = arr[i] ;
        }
    }
    cout<<"Second Mini element " <<secondMini<<endl ;
    cout << "Maximum element " << max << endl;
    cout << "Mini mum element " << mini;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
#include <iostream>
using namespace std;

bool binarySearch(int arr[], int size, int value)
{
    int left = 0;
    int right = size - 1;

    
    while (left <= right)
    {

        int mid = (left + right) / 2;

        if (arr[mid] == value)
            return true ;

        if (arr[mid] > value)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
        
    }

return false;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Binary search  starting " << endl;

    int value;
    cout << "Enter the value you need to search " << endl;
    cin >> value;

    bool  present  =  binarySearch(arr, 10, value);

    if(present){
        cout <<  "Element is present "  << endl  ;
    }
    else {
        cout << "Element is not present "  << endl ; 
    }

    cout << endl;
}

#include <iostream>
#include<vector>
using namespace std;

//  linearSearch Function  is used

bool linerSearch(vector<int> &arr , int value)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == value)
        {
            return true;
        }
    }
    return false;
}

//  calling to the main functions

int main()
{
    vector<int>  arr = {1, 5, 6, 8, 5, 7, 8, 9, 3};
    int value;

    cout << "Enter the value :- ";
    cin >> value;

    // int size = arr.size() ;
    cout << "Entering into  the Linear  Search " << endl;

    bool present = linerSearch(arr, value);
    

    if (present)
    {
        cout << "You Found the element " << endl;
    }
    else
    {
        cout << "The element is not present in this array  " << endl;
    }
}

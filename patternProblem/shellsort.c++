#include <iostream>
using namespace std;
void sort(int arr[], int n)
{
    int gap = n / 2;
    while (gap > 0)
    {
        for (int i = gap; i < n; i++)
        {
            int temp = arr[i];
            int j = i;
            while (j >= gap && arr[j - gap] > temp)
            {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = temp;
        }
        gap /= 2;
    }
}
void printarr(int arr , int n){
    
    cout << endl ;
}
int main()
{
    int n;
    cout << "Enter the number :- ";
    cin >> n;
    
}
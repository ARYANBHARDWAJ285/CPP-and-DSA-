#include<iostream>
using namespace std ;

int  main ()
{
    int num ;
    int arr ;
    int n ;
    cout <<"Enter the size of the array :- ";
    cin>>n ;
    int *arr = new int (n);
    for ( int i = 1 ; i <n ; i++)
    {
        cout<<"Enter the Element of the Array "<<endl;
        cin>>arr[i];
    }
    int max =  arr[0];
    int min = arr[0];
    for ( int i = 1 ; i <n ; i++)
    {
        if (max<arr[i]){
           max = arr[1] ; 
        }
        if (min>arr[i]){
           min = arr[1];
        }

    }
    cout<<max<<" "<<min ;

}
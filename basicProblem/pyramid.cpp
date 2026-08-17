#include<iostream>
using namespace std ;
int main()
{
    int n ;
    cout<<"Enter the number :- ";
    cin>>n ;
    for(int i = 0 ;  i < n ; i++)
    {
        for(int space = 0  ; space <  n-i-1 ; space++)
        {
            cout<<"  ";
        }
        for(int j  = 1  ;  j <= i+1 ; j ++)
        {
            cout<<j<<" " ;
        }
        for(int j =  i  ; j >= 1 ;  j-- )
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
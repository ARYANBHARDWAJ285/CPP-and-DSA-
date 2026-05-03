#include<iostream>
using namespace std ;
int main ()
{
    int x =0  , y =0 ; 
    int n ;
    cout<<"Enter the row : ";
    cin >> n ;
    for(x = 0 ; x < n ; x++ )
    {
        for(y = 0 ; y < x+1 ; y++)
        {
            cout<<"*" ;
        }
        cout<<" "<<endl ;
    }
   
    return 0 ;
}
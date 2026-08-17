#include<iostream>
using namespace std ;
int main ()
{
    int n =0 ;
    cout<<"Enter the  Number :- ";
    cin>>n ;
    for(int i = 0 ;  i  <  n  ;  i++)
    {
        for(int j = 0 ; j < i+1   ; j++)
        {
            cout<<"* " ;
        }
        cout<<endl ;
    }
    cout<<endl ;


    for(int i = 1 ; i <= n ;  i++)
    {
        for(int j  = 1 ;  j< i+ 1 ; j++)
        {
            cout<<i ;
        }
        cout<<endl ;
    }

    char ch = 'A';
    for(int i = 0 ; i <= n ; i++)
    {
        
        
        for(int j = 0 ; j < i+1 ; j++)
        {
            cout<<ch ;
            
        }
        ch++ ;
        cout<<endl ;
    }
}


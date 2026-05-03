#include<iostream>
using namespace  std ;
int main ()
{
    int n = 0 ;
    cout<<"Enter the number :- ";
    cin>>n ;
    char ch = 'A' ;
    for(int i = 0 ; i < n  ; i++)
    {
        for(int j =  0 ;  j < n ;  j++)
        {
            cout<<ch ;
            ch++ ;
        }
        cout<<endl ;
    }
}
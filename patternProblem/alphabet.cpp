#include<iostream>
using namespace  std  ;
int main()
{
    int n = 0 ;
    cout<<"Enter the number :- ";
    cin>>n ;
    for(int i = 0 ;  i< n ; i++)
    {
        char ch = 'A';
        for(int j = 0 ; j < n ;  j++ )
        {
            cout<<ch ;
            ch += 1 ;
        }cout<<endl;
    }
}
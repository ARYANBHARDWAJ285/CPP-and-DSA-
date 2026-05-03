#include<iostream>
using namespace std  ;
int main ()
{
    int n = 0 , n0 = 1;
    cout<<"Enter the number :- ";
    cin>>n ;
    for(int i  = 1 ;  i <= n ; i++)
    {
        for(int j = 1 ; j <=  n ; j++)
        {
            cout<< n0 <<" "  ;
            n0++ ;
            
        }
        
        cout<<endl ;
    }
}
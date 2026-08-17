#include<iostream>
using namespace std ;
int main()
{
    int n , num = 1 ;
    cout<<"Enter the number :- ";
    cin>>n ;
    for(int i = 0  ;  i < n ;  i++)
    {
        for(int j = 0  ;  j <  i ; j++)
        {
            cout<<" ";
        }
        for(int k = 0  ;  k < n - i; k++)
        {
            cout<<num ; ;
           
        }
        num++;
        cout<<endl;
    }



char ch = 'A';
for(int i = 0  ;  i < n ;  i++)
    {
        for(int j = 0  ;  j <  i ; j++)
        {
            cout<<" ";
        }
        for(int k = 0  ;  k < n - i; k++)
        {
            cout<<ch ; ;
           
        }
        ch++;
        cout<<endl;
    }
}

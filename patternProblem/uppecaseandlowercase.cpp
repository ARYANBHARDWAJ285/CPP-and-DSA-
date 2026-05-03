#include<iostream>
using namespace  std  ;
int main ()
{
    char ch  ;
    cout<<"Enter the character :- "<<endl ; 
    cin>>ch ;
    if(ch >= 65 && ch <= 90 )
    {
        cout<<"Upper case "<<ch <<endl ;
    }else {
        cout<<"Lowercase "<<ch <<endl ;
    }
    return  0 ;
}
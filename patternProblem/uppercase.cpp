#include<iostream>
using namespace std ;
int main ()
{
    char mychar  ;
    cout<<"Enter the letter : " ;
    cin >>mychar ;
    if(mychar >= 65  && mychar <= 91)
    {
        cout<<"Lowe case";
    }
    else {
        cout<<"uppercase";
    }
    return 0 ;
}
#include<iostream>
using namespace std ;
void swapValue(int *a , int *b)
{
    int temp = *a ;
    *a =*b ;
    *b =temp;
}
int main ()
{
    int a=10, b= 20 ;
    cout<<"before " <<a<<"y "<<b<<endl;
    swapValue(&a ,&b);
    cout<<"after"<<a<<"b"<<b<<endl ;
}
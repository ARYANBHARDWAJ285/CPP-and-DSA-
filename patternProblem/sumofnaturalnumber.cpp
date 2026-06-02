#include<iostream>
using namespace std ;
int main ()
{
    int num ;
    cout<<"Enter the number : " ;
    cin >> num ;
    int i = 1 ;
    int sum = 0 ;
    do {
        sum = sum + i ;
        i++ ;
        
    }while (i <= num);
    cout<<"The sum of the "<<sum ;
}
#include<iostream>
using namespace std ;

int factorial(int n )
{
    int fact = 1  ;
    for (int i = 1  ;  i <= n  ; i++)
    {
        fact  = fact*i ;

    }
    return fact ;
}

int ncr (int n , int r)
{
    int fact_n = factorial(n );
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);
   return  fact_n / (fact_r * fact_nmr) ;
}
int main ()
{
    int n , r ;
    cout<<"Enter the number :- ";
    cin>>n ;
    cout<<"Enter the remainder :- ";
    cin>>r ;
    // int n = 6  ,  r  = 3;
    cout<<ncr(n , r)<<endl;

    
}
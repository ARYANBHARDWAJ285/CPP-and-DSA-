#include<iostream>
using namespace std ;

void  printLineraly ( int n , int count = 1  ){
    if(count > n) {
        return ;
    }
    cout << count << endl  ; 
    printLineraly(n , count+1 );
}

int main () {
    int n  ;
    cin >> n ;
    
    printLineraly(n );

    return 0 ;
}
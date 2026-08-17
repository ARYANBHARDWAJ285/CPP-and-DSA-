#include <iostream>
using namespace std ;

int main()
{
    int n ;
    cout<<"Enter the number :- ";
    cin>>n ;
    for(  int i = 0 ; i < n ; i++)
    {
        cout<<"* ";
        for( int j  = 0  ; j < i - 1  ; j++){
       
        if( i == n -1 )
        {
            cout<<"* ";
        }else {
            cout<<"  ";
        }

        
        }
        if(i >0 )
        {
            cout<<"* ";
        }
        
        cout<<endl ;
    }




    // second solutions 

    for( int  i  = 0  ; i < n ; i++)
    {
        for( int  j = 0 ; j <  n ; j++)
        {
            if( j == 0  ||  j == i  ||  i == n -1 )
            {
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl ;
    }
    return 0  ;



}




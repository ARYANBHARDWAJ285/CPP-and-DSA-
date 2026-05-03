// #include<iostream>
// using namespace std  ;
// int main ()
// {
//     int arr[5][5] , sum = 0 ;
//     for(int  i  = 0  ;  i < 5 ;  i ++)
//     {
//         for(int j = 0 ; j < 5 ; j++ )
//         {
//             cout<<"Row size is :- "<<i<<" Column Size is :-  "<<j<<" Enter the Value :-  " ;
//             cin>>arr[i][j];
//         }
//     }
//     for(int  i  = 0  ;  i < 5 ;  i ++)
//     {
//         for(int j = 0 ; j < 5 ; j++ )
//         {
//             sum =  sum  +  arr[i][j];
//         }
//     }
//     cout<<"The sum of the element is :- "<<sum<<endl ;
    
// }

#include<iostream>
using namespace std  ;
int main ()
{
    int n ;
    cin>>n ;
    int arr[n][n] , sum = 0 ;
    
    for(int  i  = 0  ;  i < n ;  i ++)
    {
        for(int j = 0 ; j < n ; j++ )
        {
            cout<<"Row size is :- "<<i<<" Column Size is :-  "<<j<<" Enter the Value :-  " ;
            cin>>arr[i][j];
        }
    }
    for(int  i  = 0  ;  i < n ;  i ++)
    {
        for(int j = 0 ; j < n ; j++ )
        {
            sum =  sum  +  arr[i][j];
        }
    }
    cout<<"The sum of the element is :- "<<sum<<endl ;
    
}
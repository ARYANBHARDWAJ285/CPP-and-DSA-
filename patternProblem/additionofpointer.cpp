#include<stdio.h>

using namespace std ;
int main ()
{
    int arr[] = {5,10,15,20,25};
    int *a = &arr[1] ; 
    int *a1 = &arr[4];
    printf("%d\n" , a );
    printf("%d\n" , a1 );
    printf("%d\n" , a - a1);

    
}    
#include<iostream>
using namespace  std ;
int main ()
{
    int arr[] = {12,8,9,10,11,8,11,21,8,12,9,12,12} ;
    int arraysize = 0  ,  max = 0  , maxcount =0 , count = 1 ;
    arraysize =  sizeof(arr)/sizeof(arr[0]);
    for(int i = 0  ;  i  < arraysize ;  i++)
    {
        for(int j =  i+1 ; j <  arraysize ; j++)
        {
            if(arr[i] == arr[j])
            {
                count++ ;
            }
        }
        if(count>maxcount)
        {
            maxcount =  count ;
            max  =  arr[i];
        }
        count = 1 ;
    }
    cout<<"Most Occuring element :-  "<<max<<endl;
    cout<<"Max count element :- "<<maxcount<<endl;
    return 0 ;
}
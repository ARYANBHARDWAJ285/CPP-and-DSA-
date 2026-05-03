#include<iostream>
#include <vector>
using namespace std  ;
// void alternativeArray(int arr[] , int n )
// {
//     for(int i = 0  ; i < n  ; i+=2){
//         cout<<arr[i]<< " " ;

//     }
// }
// int main (){
//     int arr[] =  { 10 , 20 , 30 , 40 ,50};
//     int n =  sizeof(arr)/sizeof(arr[0]);

//     alternativeArray(arr , n );
// }

vector<int>alternativeArray(vector<int>& arr){
    vector<int> result ;
    int n =  arr.size();
    for(int i = 0  ; i < n ; i+= 2){
        result.push_back(arr[i]);
    }
    return result ;
}

int main(){
    vector<int> arr =  {10,20,30,40 , 50} ;
    vector<int> result = alternativeArray(arr);
    for(int i = 0  ; i < result.size() ;  i++ ){
        cout<< result[i] << " " ;
    }  
}


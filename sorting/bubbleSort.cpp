#include<iostream>
using namespace std ;

void bubbleSort(int arr[] , int n ){
    for( int i = n-1 ; i>= 1 ; i--){
        int count  = 0 ;
        for( int j = 0 ; j < i ; j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j] , arr[j+1]);
                count  = 1 ;
            }
        }
        if(count == 0 ){
            break ;
        }
        cout << "run";
        
    }
}

int main(){
    int n ;
    cout << "Enter the lenght of the array :- " ;
    cin >> n ;
    cout << "Put the element in the array :- " ;
    int arr[n] ;
    for( int i = 0  ; i < n ; i++){
        cin >>  arr[i] ;
    }
    bubbleSort(arr , n);
    for( int i = 0  ; i < n ; i++){
        cout << arr[i] << " ";
    }
    return  0; 

}

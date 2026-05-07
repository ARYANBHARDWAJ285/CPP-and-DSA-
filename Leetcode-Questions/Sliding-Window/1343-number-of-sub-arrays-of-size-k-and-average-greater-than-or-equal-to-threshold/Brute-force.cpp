//  Showing Time Limit Exceeded


// Time Complexity : O(n * k)
// Space Complexity : O(1)

#include<iostream>
#include<vector>
using namespace std ;

class Solution {
   public :
   int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size() ;
        int count = 0 ;

        for(int i = 0  ; i <= n - k  ; i++){
            int sum = 0 ;
            for (int j = i ; j < i+k  ; j++){
                sum +=  arr[j] ;
            }

            int average = sum / k ;
            if(average >= threshold ){
                count++ ;
            }
        }
        return  count ;
    }
};

int main (){
    cout << "Enter the Size of the Array :- " ;
    int n ;
    cin >> n ;
    
    vector<int> arr(n) ;
    cout<< "Enter the Element of the Array :- "; 
    for(int i = 0 ; i < n ; i++ ){
        cin>> arr[i] ;
    }
    
    cout << endl ;

    cout<< "Enter Window Size :- " ;
    int k ;
    cin >> k; 

    cout << endl ;

    cout << "Enter the threshold :- ";
    int threshold ;
    cin>>  threshold ; 

    cout << endl ;

    Solution obj ;

    int result = obj.numOfSubarrays(arr , k , threshold ) ;

    cout <<"Output :- "  << result << endl ;
}

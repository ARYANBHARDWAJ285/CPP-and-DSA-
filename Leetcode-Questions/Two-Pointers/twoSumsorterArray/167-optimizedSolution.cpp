/*
Time Complexity: O(N)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSumSortedoptimzed(vector<int>& numbers, int target) {
         
        
        int l = 0 ;
        int r =  numbers.size() - 1  ;
        
       
        while ( l < r ){
        int   sum   = numbers[l] + numbers[r] ;
        if( sum < target ){
            l++ ;
        }else if (sum > target )
        {
            r-- ;
        }
        else 
        {
           return { l + 1  ,  r +  1 }; 
        }
        
        }
        return {1 , -1 } ;
    }
};

int main() {
    cout<< "Enter the Size of the Array : "<<endl ; 
    int n;
    cin >> n;

    vector<int> nums(n);

    cout<< "Enter the Element of the Array : " <<endl;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout<< "Enter the target  : -  " <<endl;

    int target;
    cin >> target;

    Solution obj;
    vector<int> ans = obj.twoSumSortedoptimzed(nums, target);
    
    cout<< "Ouput  : -  " <<endl;
    cout << ans[0] << " " << ans[1];

    return 0;
}

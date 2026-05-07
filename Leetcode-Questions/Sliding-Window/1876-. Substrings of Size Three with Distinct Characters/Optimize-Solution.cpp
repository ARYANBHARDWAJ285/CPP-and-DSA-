// Time Complexity : O(n)
// Space Complexity : O(1)

#include <iostream>
using namespace std  ;

class Solution {
   public :

   int countGoodSubstrings(string s) {
        int n = s.length();
        int count = 0;
        for(int i = 0; i < n - 2; i++) {
            if(s[i] != s[i+1] && s[i+1] != s[i+2] && s[i] != s[i+2]) {
                count++;
            }
        }
        return count;
    }
};

int main () {
    cout << "Enter the String :- " ;
    string s  ;
    cin >>  s;
    Solution obj ;

    int result = obj.countGoodSubstrings(s);
 
    cout << "Output ";
    cout<< result ;

    return 0 ;
}

/*
Time Complexity :-  O(N2)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSumSorted(vector<int> nums, int target) {
        int n = nums.size();

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int sum = nums[i] + nums[j];

                if (sum == target) {
                    return {i+1, j+1};
                }
            }
        }

        return {-1, -1};
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
    vector<int> ans = obj.twoSumSorted(nums, target);
    
    cout<< "Ouput  : -  " <<endl;
    cout << ans[0] << " " << ans[1];

    return 0;
}


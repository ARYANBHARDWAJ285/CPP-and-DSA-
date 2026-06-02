/*
Time Complexity: O(n)
Space Complexity: O(n)
*/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        for(int i = 0; i < n; i++) {
            result.push_back(nums[i]);
        }
        for(int i = n - 1; i >= 0; i--) {
            result.push_back(nums[i]);
        }
        return result;
    }
};
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    vector<int> result = obj.concatWithReverse(nums);
    cout << "Result array: ";
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}


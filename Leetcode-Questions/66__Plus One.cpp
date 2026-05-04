#include <iostream>
#include <vector>
#include <algorithm>  // for reverse

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n = digits.size();
        vector<int> result;
        int add = 1;   // we need to add 1 initially

        // start from the last digit
        for (int i = n - 1; i >= 0; i--) {
            int sum = digits[i] + add;
            int rem = sum % 10;
            add = sum / 10;

            result.push_back(rem);
        }

        // if carry is still left
        if (add) {
            result.push_back(add);
        }

        // reverse because we filled from back
        reverse(result.begin(), result.end());

        return result;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter number of digits: ";
    cin >> n;

    vector<int> digits(n);

    cout << "Enter digits: ";
    for (int i = 0; i < n; i++) {
        cin >> digits[i];
    }

    vector<int> ans = obj.plusOne(digits);

    cout << "Result: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

/*
Time Complexity: O(n)
Space Complexity: O(1)

*/

#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int scoreOfString(string s) {
        int n = s.length();
        int difference = 0;
        for (int i = 1; i < n; i++) {

            difference += abs(s[i] - s[i - 1]);
        }

        return difference;
    }
};

int main() {

    string s;
    cout << "Enter the string: ";
    cin >> s;
    Solution obj;
    int result = obj.scoreOfString(s);
    cout << "Score of String is: " << result << endl;

    return 0;
}


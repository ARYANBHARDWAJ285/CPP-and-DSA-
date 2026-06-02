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
        int i = 0;
        int difference = 0;
        while (i < n - 1) {
            int j = i + 1;
            int convert1 = s[i];
            int convert2 = s[j];
            difference += abs(convert1 - convert2);
            i++;
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


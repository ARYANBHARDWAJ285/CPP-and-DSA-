/*
Time Complexity: O(n)
Space Complexity: O(1)

*/

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
          swap(s[left++], s[right--]);
        }
    }
};

int main() {

    int n;
    cout << "Enter the size of character array: ";
    cin >> n;
    vector<char> s(n);
    cout << "Enter the characters: ";
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    Solution obj;
    obj.reverseString(s);
    cout << "Reversed String: ";
    for (int i = 0; i < n; i++) {
        cout << s[i] << " ";
    }
    cout << endl;

    return 0;
}


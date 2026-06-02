#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        // negative numbers can't be palindrome
        if (x < 0) {
            return false;
        }

        int original = x;
        long long reversed = 0;   // using long long to avoid overflow

        // reverse the number
        while (x != 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x = x / 10;
        }

        // check if original and reversed are same
        return original == reversed;
    }
};

int main() {
    Solution obj;

    int num;
    cout << "Enter number: ";
    cin >> num;

    if (obj.isPalindrome(num)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";

        int start = 0, maxLength = 0;

        for (int i = 0; i < s.length(); i++) {
            // Odd-length palindrome (single character center)
            expandAroundCenter(s, i, i, start, maxLength);
            // Even-length palindrome (two-character center)
            expandAroundCenter(s, i, i + 1, start, maxLength);
        }

        return s.substr(start, maxLength);
    }

private:
    void expandAroundCenter(const string& s, int left, int right, int& start, int& maxLength) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }

        int newLength = right - left - 1; // Length of palindrome found
        if (newLength > maxLength) {
            start = left + 1;   // Adjust start index
            maxLength = newLength; // Update max length
        }
    }
};

// Test cases
int main() {
    Solution sol;
    cout << sol.longestPalindrome("babad") << endl;
    cout << sol.longestPalindrome("cbbd") << endl; 
    cout << sol.longestPalindrome("cbbbaaaa") << endl;
    return 0;
}

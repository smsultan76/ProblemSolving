#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            int n = s.size();
            if (n == 0) return 0;
            int ans = 1;
            int start = 0;
            unordered_map<char, int> last;
            last[s[0]] = 0;
            for (int i = 1; i < n; i++) {
                if (last.find(s[i]) != last.end() && last[s[i]] >= start) {
                    start = last[s[i]] + 1;
                }
                last[s[i]] = i;
                ans = max(ans, i - start + 1);
            }
            return ans;
        }
};

int main() {
    Solution s;
    cout << s.lengthOfLongestSubstring("abcabcbb") << endl;
    cout << s.lengthOfLongestSubstring("bbbbb") << endl;
    cout << s.lengthOfLongestSubstring("pwwkew") << endl;
    return 0;
}
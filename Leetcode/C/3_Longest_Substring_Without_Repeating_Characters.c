#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    if (n == 0) return 0;
    int ans = 1;
    int start = 0;
    int last[256];
    for (int i = 0; i < 256; i++) {
        last[i] = -1;
    }
    last[(unsigned char)s[0]] = 0;
    for (int i = 1; i < n; i++) {
        if (last[(unsigned char)s[i]] != -1 && last[(unsigned char)s[i]] >= start) {
            start = last[(unsigned char)s[i]] + 1;
        }
        last[(unsigned char)s[i]] = i;
        if (i - start + 1 > ans) {
            ans = i - start + 1;
        }
    }
    return ans;
}

int main() {
    printf("%d\n", lengthOfLongestSubstring("abcabcbb"));
    printf("%d\n", lengthOfLongestSubstring("bbbbb"));
    printf("%d\n", lengthOfLongestSubstring("pwwkew"));
    return 0;
}
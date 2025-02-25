#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to expand around the center and update start & maxLength
void expandAroundCenter(char *s, int left, int right, int *start, int *maxLength, int len) {
    while (left >= 0 && right < len && s[left] == s[right]) {
        left--;
        right++;
    }

    int newLength = right - left - 1; // Length of the palindrome found
    if (newLength > *maxLength) {
        *start = left + 1;   // Adjust start index
        *maxLength = newLength; // Update max length
    }
}

// Function to find the longest palindromic substring
char* longestPalindrome(char *s) {
    int len = strlen(s);
    if (len == 0) return "";

    int start = 0, maxLength = 0;

    for (int i = 0; i < len; i++) {
        // Odd-length palindrome
        expandAroundCenter(s, i, i, &start, &maxLength, len);
        // Even-length palindrome
        expandAroundCenter(s, i, i + 1, &start, &maxLength, len);
    }

    // Allocate memory dynamically to handle large strings
    char *result = (char*)malloc((maxLength + 1) * sizeof(char));
    strncpy(result, s + start, maxLength);
    result[maxLength] = '\0'; // Null-terminate the substring
    return result;
}

// Test cases
int main() {
    char *res;

    res = longestPalindrome("babad");
    printf("%s\n", res);  // Output: "bab" or "aba"
    free(res); // Free allocated memory

    res = longestPalindrome("cbbd");
    printf("%s\n", res);  // Output: "bb"
    free(res);

    res = longestPalindrome("cbbbaaaa");
    printf("%s\n", res);  // Output: "aaaa"
    free(res);

    // Large input test
    char largeStr[100001];
    memset(largeStr, 'a', 100000);
    largeStr[100000] = '\0';

    res = longestPalindrome(largeStr);
    printf("Length of result for large input: %lu\n", strlen(res));  // Should print 100000
    free(res);

    return 0;
}

class Solution(object):
    def longestPalindrome(self, s):
        if len(s) == 0:
            return ""
        start = 0
        end = 0
        def expandAroundCenter(left, right):
            while left >= 0 and right < len(s) and s[left] == s[right]:
                left -= 1
                right += 1
            return left+1, right-1
        
        for i in range(len(s)):
            left1, right1 = expandAroundCenter(i, i)
            left2, right2 = expandAroundCenter(i, i+1)
            if right1 - left1 > end - start:
                start, end = left1, right1
            if right2 - left2 > end - start:
                start, end = left2, right2
        return s[start:end+1]

if __name__ == '__main__':
    s = Solution()
    print(s.longestPalindrome("babad"))
    print(s.longestPalindrome("cbbd"))
    print(s.longestPalindrome("cbbbaaaa"))

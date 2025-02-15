class Solution(object):
    def lengthOfLongestSubstring(self, s):
        if not s:
            return 0
        start = 0
        max_len = 0
        char_index = {}
        for i, char in enumerate(s):
            if char in char_index and char_index[char] >= start:
                start = char_index[char] + 1
            char_index[char] = i
            max_len = max(max_len, i - start + 1)
        
        return max_len
    
if __name__ == '__main__':
    s = Solution()
    print (s.lengthOfLongestSubstring("abcabcbb"))
    print (s.lengthOfLongestSubstring("bbbbb"))
    print (s.lengthOfLongestSubstring("pwwkew"))
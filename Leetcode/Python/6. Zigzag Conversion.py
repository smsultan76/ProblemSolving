class Solution(object):
    def convert(self, s, numRows):
        if numRows == 1:
            return s
        res = [''] * numRows
        index = 0
        step = 1
        for i in range(len(s)):
            res[index] += s[i]
            if index == 0:
                step = 1
            if index == numRows - 1:
                step = -1
            index += step
        return ''.join(res)
    

if __name__ == "__main__":
    s = Solution()
    print(s.convert("PAYPALISHIRING", 3))
    print(s.convert("PAYPALISHIRING", 4))
class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        nums1.extend(nums2)
        nums1.sort()
        count = len(nums1)
        if count % 2 == 0:
            mid = count // 2
            return (nums1[mid - 1] + nums1[mid]) / 2.0
        else:
            return nums1[count // 2]


if __name__ == '__main__':
    s = Solution()
    nums1 = [1, 3]
    nums2 = [2]
    print(s.findMedianSortedArrays(nums1, nums2))
    nums1 = [1, 2]
    nums2 = [3, 4]
    print(s.findMedianSortedArrays(nums1, nums2))

#include<stdio.h>
#include<limits.h>
#define fmax(a, b) ((a) > (b) ? (a) : (b))
#define fmin(a, b) ((a) < (b) ? (a) : (b))


double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    if (nums1Size > nums2Size) {
        return findMedianSortedArrays(nums2, nums2Size, nums1, nums1Size);
    }
    int x = nums1Size;
    int y = nums2Size;
    int low = 0;
    int high = x;
    while (low <= high) {
        int partitionX = (low + high) / 2;
        int partitionY = (x + y + 1) / 2 - partitionX;
        int maxLeftX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
        int minRightX = (partitionX == x) ? INT_MAX : nums1[partitionX];
        int maxLeftY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
        int minRightY = (partitionY == y) ? INT_MAX : nums2[partitionY];
        if (maxLeftX <= minRightY && maxLeftY <= minRightX) {
            if ((x + y) % 2 == 0) {
                return (double)(fmax(maxLeftX, maxLeftY) + fmin(minRightX, minRightY)) / 2;
            } else {
                return (double)fmax(maxLeftX, maxLeftY);
            }
        } else if (maxLeftX > minRightY) {
            high = partitionX - 1;
        } else {
            low = partitionX + 1;
        }
    }
    return 0;    
}

int main(){
    int nums1[] = {1, 3};
    int nums2[] = {2};
    printf("%f\n", findMedianSortedArrays(nums1, 2, nums2, 1));
    int nums3[] = {1, 2};
    int nums4[] = {3, 4};
    printf("%f\n", findMedianSortedArrays(nums3, 2, nums4, 2));
    return 0;
}
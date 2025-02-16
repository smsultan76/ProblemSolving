<?php
class Solution {

    function findMedianSortedArrays($nums1, $nums2) {
        $nums = array_merge($nums1, $nums2);
        sort($nums);
        $count = count($nums);
        if($count % 2 == 0){
            $mid = $count / 2;
            return ($nums[$mid - 1] + $nums[$mid]) / 2;
        }else{
            $mid = floor($count / 2);
            return $nums[$mid];
        }
    }
}
$sol = new Solution();
$nums1 = [1, 3];
$nums2 = [2];
echo $sol->findMedianSortedArrays($nums1, $nums2);
$nums1 = [1, 2];
$nums2 = [3, 4];
echo $sol->findMedianSortedArrays($nums1, $nums2);


?>

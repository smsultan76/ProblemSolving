<?php

class Solution {
    public function twoSum($nums, $target) {
        for ($i = 0; $i < count($nums); $i++) {
            for ($j = $i + 1; $j < count($nums); $j++) {
                if ($nums[$i] + $nums[$j] == $target) {
                    return [$i, $j];
                }
            }
        }
        return [];
    }
}

$sol = new Solution();
$nums = [2, 7, 11, 15];
$target = 9;
$result = $sol->twoSum($nums, $target);
echo "Indices: [" . $result[0] . ", " . $result[1] . "]\n";

?>

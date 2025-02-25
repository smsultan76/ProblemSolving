<?php
class Solution {
    function longestPalindrome($s) {
        if (strlen($s) == 0) return "";

        $start = 0;
        $end = 0;

        for ($i = 0; $i < strlen($s); $i++) {
            list($left1, $right1) = $this->expandAroundCenter($s, $i, $i);
            list($left2, $right2) = $this->expandAroundCenter($s, $i, $i + 1);

            if ($right1 - $left1 > $end - $start) {
                $start = $left1;
                $end = $right1;
            }
            if ($right2 - $left2 > $end - $start) {
                $start = $left2;
                $end = $right2;
            }
        }

        return substr($s, $start, $end - $start + 1);
    }

    private function expandAroundCenter($s, $left, $right) {
        while ($left >= 0 && $right < strlen($s) && $s[$left] == $s[$right]) {
            $left--;
            $right++;
        }
        return [$left + 1, $right - 1];
    }
}


$s = new Solution();
echo $s->longestPalindrome("babad") . "\n";
echo $s->longestPalindrome("cbbd") . "\n";
echo $s->longestPalindrome("cbbbaaaa") . "\n";
?>

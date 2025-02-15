<?php
class Solution{
    function lengthOfLongestSubstring($s) {
        $n = strlen($s);
        $ans = 0;
        $map = [];
        for($i = 0, $j = 0; $j < $n; $j++){
            if(array_key_exists($s[$j], $map)){
                $i = max($map[$s[$j]], $i);
            }
            $ans = max($ans, $j - $i + 1);
            $map[$s[$j]] = $j + 1;
        }
        return $ans;
    }
}

$s = new Solution();
echo $s->lengthOfLongestSubstring("abcabcbb");
echo $s->lengthOfLongestSubstring("bbbbb");
echo $s->lengthOfLongestSubstring("pwwkew");

?>
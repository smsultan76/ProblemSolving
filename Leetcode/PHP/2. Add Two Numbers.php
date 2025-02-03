<?php
class ListNode {
    public $val;
    public $next;
    function __construct($val = 0, $next = null) {
        $this->val = $val;
        $this->next = $next;
    }
}

class Solution {
    function addTwoNumbers($l1, $l2) {
        $dummy = new ListNode();
        $curr = $dummy;
        $carry = 0;

        while ($l1 !== null || $l2 !== null) {
            $x = ($l1 !== null) ? $l1->val : 0;
            $y = ($l2 !== null) ? $l2->val : 0;
            $sum = $carry + $x + $y;
            $carry = intdiv($sum, 10);
            $curr->next = new ListNode($sum % 10);
            $curr = $curr->next;

            if ($l1 !== null) $l1 = $l1->next;
            if ($l2 !== null) $l2 = $l2->next;
        }

        if ($carry > 0) {
            $curr->next = new ListNode($carry);
        }

        return $dummy->next;
    }
}

$l1 = new ListNode(2);
$l1->next = new ListNode(4);
$l1->next->next = new ListNode(3);

$l2 = new ListNode(5);
$l2->next = new ListNode(6);
$l2->next->next = new ListNode(4);

$solution = new Solution();
$result = $solution->addTwoNumbers($l1, $l2);

while ($result !== null) {
    echo $result->val . " ";
    $result = $result->next;
}
?>
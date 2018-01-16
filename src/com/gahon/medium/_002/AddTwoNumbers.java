package com.gahon.medium._002;

/**
 * Definition for singly-linked list.
 */
class ListNode {
    int val;
    ListNode next;

    ListNode(int x) {
        val = x;
    }
}


public class AddTwoNumbers {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode result = new ListNode(0), cur = result;
        int flag = 0;
        for (; l1 != null || l2 != null || flag > 0; ) {
            int n1 = l1 == null ? 0 : l1.val;
            int n2 = l2 == null ? 0 : l2.val;
            int sum = (n1 + n2 + flag);
            l1 = l1!=null?l1.next:null;
            l2 = l2!=null?l2.next:null;
            flag = sum / 10;
            ListNode node = new ListNode(sum%10);
            cur.next = node;
            cur = node;
        }
        return result.next;
    }

}

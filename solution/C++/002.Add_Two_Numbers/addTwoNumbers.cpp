/**
 * Definition for singly-linked list.
 */
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode *res = new ListNode(0),*newres =res;
        while(l1||l2||carry){
        	carry = (l1?l1->val:0)+(l2?l2->val:0)+carry;
        	newres->next = new ListNode(carry%10);
        	carry = carry/10;
        	newres=newres->next;
        	l1 = l1?l1->next:NULL;
        	l2 = l2?l2->next:NULL;
        }
        return res->next;
    }
};
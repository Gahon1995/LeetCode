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
        ListNode *longList;
        while((l1!=NULL)&&l2!=NULL){
        	ListNode *tmp = new ListNode(0);
        	carry = l1->val+l2->val+carry;
        	tmp->val = carry%10;
        	carry = carry/10;
        	l1 = l1->next;
        	l2 = l2->next;

        	newres->next = tmp;
        	newres = tmp;
        }
        longList = (l1!=NULL)?l1:l2;
        while(longList!=NULL){
        	ListNode *tmp = new ListNode(0);
        	carry = longList->val+carry;
        	tmp->val = carry%10;
        	carry = carry/10;
        	longList=longList->next;
        	newres->next = tmp;
        	newres = tmp;
        }
        if(carry==1){
        	ListNode *tmp = new ListNode(1);
        	newres->next = tmp;
        }
        return res->next;
    }
};
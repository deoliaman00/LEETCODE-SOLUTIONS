/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void changeSign(ListNode *j)
    {
        while(j)
        {
            j->val*=-1;
            j=j->next;
        }
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
       changeSign(headA);
        while(headB)
        {
            if(headB->val<0)break;
            headB=headB->next;
        }
        
        changeSign(headA);
        
        return headB;
    }
};
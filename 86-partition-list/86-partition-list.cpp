/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x)
    {
        ListNode *small=new ListNode();
        ListNode *big=new ListNode();
        ListNode *hsmall=small;
        ListNode *hbig=big;
        
        ListNode *htemp=head;
        
        while(htemp!=NULL)
        {
            if(htemp->val<x)
            {
                ListNode *neww=new ListNode(htemp->val);
                small->next=neww;
                small=neww;
            }
            htemp=htemp->next;
        }
        htemp=head;
        while(htemp!=NULL)
        {
            if(htemp->val>=x)
            {
                ListNode *neww=new ListNode(htemp->val);
                big->next=neww;
                big=neww;
            }
            big->next=NULL;
            htemp=htemp->next;
        }
        small->next=hbig->next;
        
        return hsmall->next;
        
        
        
    }
};

/*
Input: head = [1,4,3,2,5,2], x = 3
Output: [1,2,2,4,3,5]
Example 2:

Input: head = [2,1], x = 2
Output: [1,2]
 

Constraints:

The number of nodes in the list is in the range [0, 200].
-100 <= Node.val <= 100
-200 <= x <= 200

*/
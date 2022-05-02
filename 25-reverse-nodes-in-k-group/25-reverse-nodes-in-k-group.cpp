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
    ListNode* reverseKGroup(ListNode* head, int k)
    {
        int count=0;
         ListNode *Curr=head,*prev=NULL,*first=NULL;
         ListNode* cursor = head;
        for(int i = 0; i < k; i++){
            if(cursor == nullptr) return head;
            cursor = cursor->next;
        }
        
       
        while(count<k && Curr!=NULL)
        {
            first=Curr->next;
            Curr->next=prev;
            prev=Curr;
            Curr=first;
            count++;
        }
        
        if(first!=NULL)
        {
            head->next=reverseKGroup(first,k);
        }
        
        
        return prev;
    }
};
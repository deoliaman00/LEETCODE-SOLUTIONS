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
    ListNode* swapPairs(ListNode* head) 
    {
        ListNode *previous,*first;
        first=head;
        
        ListNode *dummy=new ListNode(0);
        previous=dummy;
        previous->next=head;
        while(first!=NULL && first->next!=NULL)
        {
             ListNode*second,*future;
            second=first->next;
            future=second->next;
            
            second->next=first;
            previous->next=second;
            first->next=future;
            
            
            previous=first;
            first=future;
            
            
        }
       return dummy->next; 
    }
};
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
    ListNode *reverse(ListNode *head)
    {
         ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nxt=NULL;
        
        while(curr)
        {
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
    void reorderList(ListNode* head) 
    {
        /*
        three steps we have to follow:-
            1. Half the array
            2. Reverse the second array
            3. Connect both the indvi array into one
            */
        //Step1:- Lets half the array by slow and fast pointer approach
          ListNode *slow=head;
        ListNode *fast=head->next;
        while(fast && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode *second=reverse(slow->next);
        slow->next=NULL;
        ListNode *first=head;
        while(second!=NULL)
        {
            ListNode *t1=first->next;
            ListNode *t2=second->next;
            first->next=second;
            second->next=t1;
            first=t1;
            second=t2;
        }
        
        
        
    }
};
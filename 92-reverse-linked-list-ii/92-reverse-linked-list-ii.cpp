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
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        if(head==NULL)
        {
            return NULL;
        }
        
        ListNode *curr=head,*prev=NULL;
        
        while(left>1)
        {
            prev=curr;
            curr=curr->next;
            
            left--;
            right--;
        }
        
        ListNode *connectFirst=prev;
        ListNode *tailConnect=curr;
        
        ListNode *tempNode=NULL;
        while(right>0)
        {
            tempNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=tempNode;
            right--;
        }
        
        
        if(connectFirst!=NULL)
        {
            connectFirst->next=prev;
        }
        else
        {
            head=prev;
        }
        
        tailConnect->next=curr;
        
        return head;
        
    }
};
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
        ListNode *prev=NULL,*curr=head;
        while(left>1)
        {
            prev=curr;
            curr=curr->next;
            left--;
            right--;
        }
        
        ListNode *connect= prev;
        ListNode *tail= curr;
        ListNode *nextNode=NULL;
        while(right>0) // 3
        {
            nextNode= curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
            right--;
        }
        
        
        //... now all the nodes have been reversed now connecting the before left and after right nodes     
        if(connect!=NULL)
        {
            connect->next=prev;
        }
        else
        {
            head=prev;
        }
        
        tail->next=curr;
        return head;
    }
};
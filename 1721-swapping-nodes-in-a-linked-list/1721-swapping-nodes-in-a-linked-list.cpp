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
    ListNode* swapNodes(ListNode* head, int k)
    {
        
        /* sol 1
        ListNode *ptr1 = head, *ptr2 = head, *kth = NULL;
        while (--k)
            ptr1 = ptr1->next;
        
        kth = ptr1;
        ptr1 = ptr1->next;
        
        while (ptr1) {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        swap(ptr2->val, kth->val);
        return head;
        */
        
        
        // 2nd method
        
        
        
        
        ListNode *left=head,*right=head,*current=head;
        
        int count=1;
        while(current)
        {
            if(count<k)
            {
                left=left->next;
            }
            if(count>k)
            {
                right=right->next;
            }
        
        
        current=current->next;
        count++;
        }
        
        swap(left->val,right->val);
        return head;    
    }
    
};
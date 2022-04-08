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
    bool hasCycle(ListNode *head) 
    {
        int c=0;
        if(head==NULL) return false;
        if(head->next==NULL) return false;
        ListNode *s,*f; //.............[3,2,0,-4]...........
        s=f=head;
        do
        {
            s=s->next;
            f=f->next;
            f=f!=NULL?f->next:NULL;
            c++;
            
        }while(s!=NULL && f!=NULL && f!=s);
        
            if(f==s) return true;
        
        
        return false;
        
    }
};
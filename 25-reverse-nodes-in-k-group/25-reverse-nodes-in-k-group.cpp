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
        
//         if(head==NULL || k==1) return head;
//         ListNode *temp= new ListNode(0);
//         temp->next=head;
//         ListNode*curr=temp,*nex=temp,*pre=temp;
        
//         int count=0;
        
        
//         while(curr->next!=NULL)
//         {
           
//             curr=curr->next;
//              count++;
//         }
        
//         int i=0;
        
//         while(count>=k)
//         {
//             curr=pre->next;
//             nex=curr->next;
//             for(i=1;i<k;i++)
//             {
//                 curr->next=nex->next;
//                 nex->next=pre->next;
//                 pre->next=nex;
//                 nex=curr->next;
//             }
//             pre=curr;
//         count-=k;
//         }
//         return temp->next;
        
        
        
        ListNode *t= new ListNode(0);
        t->next=head;
        ListNode *p=t,*c=t,*n=t;
        int count=0;
        
        while(c->next)
        {
            count++;
            c=c->next;
        }
        
        while(count>=k)
        {
            c=p->next;
            n=c->next;
            for(int i=1;i<k;i++)
            {
                c->next=n->next;
                n->next=p->next;
                p->next=n;
                n=c->next;
            }
            p=c;
            count-=k;
        }
        
        return t->next;
    }
};
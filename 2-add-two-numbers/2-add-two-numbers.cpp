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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode *p=new ListNode();
        ListNode *temp=p;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry!=0)
        {
            int sum=0;
            if(l1!=NULL)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            sum=sum+carry;
            carry=sum/10; //if exists then will come otherwie wont if sum>=10 then only
            ListNode *node=new ListNode(sum%10);
            temp->next=node;
            temp=temp->next;
        }
        return(p->next);
        }
};
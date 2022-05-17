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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        set<int> ans;
        ListNode *nw=head;
        ListNode *p=new ListNode();
        ListNode *temp=p;
        
       int i=0;
        while(nw!=NULL)
        {
            ans.emplace(nw->val);
            nw=nw->next;
           
        }
         for(auto it=ans.begin();it!=ans.end();it++)
        {
         cout<<*it;           
        }
        for(auto it=ans.begin();it!=ans.end();it++)
        {
           ListNode *node =new ListNode(*it);
            temp->next=node;
            temp=temp->next;
           
        }
     return p->next;
    }
};
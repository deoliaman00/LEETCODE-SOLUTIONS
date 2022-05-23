/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head)
    {
        Node *iter=head,*front=head;
        
        while(iter!=NULL)
        {
            front=iter->next;
            Node *copy=new Node(iter->val);
            iter->next=copy;
            copy->next=front;
            iter=front;
        }
        
        // all the dummy nodes are now connected 
        
        iter=head;// back to head node
        
        while(iter!=NULL)
        {
            if(iter->random!=NULL)
            {
                iter->next->random=iter->random->next;
            }
            iter=iter->next->next;
        }
        
        //all the random pointers assigned back;
        
        
        Node *copyHead=new Node(0);
        iter=head;
        //copyHead->next=iter->next; // on the first copied node
        Node *coHead=copyHead;
        while(iter!=NULL)
        {
            front=iter->next->next; // on second node placed
            
            coHead->next=iter->next;
            
            iter->next=front;
            coHead=coHead->next;
            
            iter=front;
        }
        
        return copyHead->next;
        
    }
};
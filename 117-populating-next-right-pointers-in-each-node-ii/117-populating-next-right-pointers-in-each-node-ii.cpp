/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root)
    {
        if(root==NULL)return root;
        queue<Node*>help;
        Node *black=root;
        help.push(black);
        
        
        // jabtk hmara queue empty nahi huva tbtk chlte raho
        
        while(help.empty()==0)
        {
            int n=help.size(); // eg-> 1
            Node *prev=NULL;
            for(int i=0;i<n;i++)
            {
                Node *top= help.front(); // here top->1
                help.pop(); // queue is empty
                top->next=prev;
                prev=top;
                if(top->right)
                {
                    help.push(top->right);
                }
                if(top->left)
                {
                    help.push(top->left);
                }
            }
        }
        
        return root;
    }
};
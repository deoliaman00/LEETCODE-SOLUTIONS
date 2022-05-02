/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* first;
    TreeNode* middle;
    TreeNode* last;
    TreeNode* prev;
    void inorder(TreeNode *head)
    {
        if(head==NULL) return;
        
        inorder(head->left);
        if(prev!=NULL && head->val< prev->val)
        {
            // non adjacent case
            
            if(first==NULL)
            {
                first=prev;
                middle=head;
                
            }
        
            // adjacent case
            else
            {
                last=head;
            }
            
        }
        prev=head;
        inorder(head->right);
    }
    
    void recoverTree(TreeNode* root)
    {
        first=middle=last=NULL;
        prev=new TreeNode(INT_MIN);
        inorder(root);
        // NOT adjacent case
        
        if(first!=NULL && last!=NULL) swap(first->val,last->val);
        else if(first!=NULL && middle!=NULL) swap(first->val,middle->val);
        
    }
};
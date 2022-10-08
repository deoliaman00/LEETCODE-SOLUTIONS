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
    void insert(TreeNode* root, int val, int depth,int curD)
    {
        // Base condition
        
        if(root==NULL)return;
        
        if(depth-1==curD)
        {
            // done for the left node of the tree 
            TreeNode *temp=root->left;
            //TreeNode *j=
            root->left=new TreeNode(val);
            root->left->left=temp;
            
            // for the right node of the tree
            temp=root->right;
           root->right=new TreeNode(val);
            root->right->right=temp;
            
        }
        else
        {
            insert(root->left,val,depth,curD+1);
             insert(root->right,val,depth,curD+1);
        }
    }
    
    
    
    
    TreeNode* addOneRow(TreeNode* root, int val, int depth) 
    {
        if(depth==1)
        {
            TreeNode *temp=new TreeNode(val);
           temp->left=root;
            return temp;
        }
        else
        {
         insert(root,val,depth,1);    
        }
        return root;        
    }
};
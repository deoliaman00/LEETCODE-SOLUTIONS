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
    TreeNode* trimm(TreeNode* root, int low, int high)
    {
        if(root==NULL)
            return NULL;
        TreeNode *leftRoot = trimm(root->left,low,high);
        if(leftRoot!=root->left)
        {
            root->left=leftRoot;
        }
        
        TreeNode *rightRoot= trimm(root->right,low,high);
        if(rightRoot!=root->right)
        {
            root->right=rightRoot;
        }
        if(root->val>high || root->val<low)
        {
            return (root->left)?root->left:root->right;
        }
        return root;
    }
    
        
      
        
 
    TreeNode* trimBST(TreeNode* root, int low, int high)
    {
        return trimm(root,low,high);
        
    }
};
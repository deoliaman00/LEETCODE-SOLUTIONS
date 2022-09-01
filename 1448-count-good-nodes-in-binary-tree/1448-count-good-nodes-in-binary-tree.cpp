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
    int count=0;
    void func(TreeNode *root,int maxi){
    
        if(root==NULL)return;
        if(root->val>=maxi)
        {
            count++;
            maxi=root->val;
        }
        func(root->left,maxi);
         func(root->right,maxi);
    }
    int goodNodes(TreeNode* root)
    {
        if(root==NULL)return count;
        int maxi=INT_MIN;
        func(root,maxi);
        return count;
        
    }
};
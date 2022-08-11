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
    bool f(TreeNode *root,long long int lt,long long int rt)
    {
        if(root==NULL)return true;
        if(root->val<=lt || root->val>=rt)return false;
        bool one=f(root->left,lt,root->val);
        bool two=f(root->right,root->val,rt);
        return one && two;
    }
    bool isValidBST(TreeNode* root) 
    {
       return f(root,LONG_MIN,LONG_MAX);
    }
};
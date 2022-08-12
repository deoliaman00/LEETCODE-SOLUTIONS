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
    void f(TreeNode *root,vector<int>&arr)
    {
        if(root==NULL)
        {
            return;
        }
        f(root->left,arr);
        f(root->right,arr);
        arr.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root)
    {
        vector<int>ans;
        f(root,ans);
        return ans;
        
    }
};
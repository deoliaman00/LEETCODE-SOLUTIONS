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
    vector<vector<int>>ans;
    void f(TreeNode* root, int tar,int cur,vector<int>cArr)
    {
        if(root==NULL)return;
        cur+=root->val;
        cArr.push_back(root->val);
        if(root->left==NULL && root->right==NULL && tar==cur)
        {
            ans.push_back(cArr);
        }
        f(root->left,tar,cur,cArr);
        f(root->right,tar,cur,cArr);
        cArr.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int tar)
    {
        vector<int>arr;
        f(root,tar,0,arr);
        return ans;
    }
};
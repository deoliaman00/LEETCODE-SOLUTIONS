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
    unordered_map<int,int>mp;
    void f(TreeNode*root)
    {
        if(root==NULL)return;
        f(root->left);
        mp[root->val]++;
        f(root->right);
    }
    vector<int> findMode(TreeNode* root)
    {
        f(root);
        vector<int>arr;
        int maxi=INT_MIN;
        for(auto ii:mp)
        {
            maxi=max(maxi,ii.second);
        }
        for(auto ii:mp)
        {
            if(maxi==ii.second)
            {
                arr.push_back(ii.first);
            }
        }
        return arr;
        
    }
};
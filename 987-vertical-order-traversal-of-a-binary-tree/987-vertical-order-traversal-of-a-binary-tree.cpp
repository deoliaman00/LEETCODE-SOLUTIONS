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
    void f(map<int,vector<pair<int,int>>> &mp,TreeNode *root,int right,int left)
{
    if(root==NULL)
    {
        return;
    }
    mp[left].push_back({right,root->val});
    f(mp,root->left,right+1,left-1);
    f(mp,root->right,right+1,left+1);
}
    
    vector<vector<int>> verticalTraversal(TreeNode* root)
    {
        map<int,vector<pair<int,int>>> mp;
        vector<vector<int>> ver;
        f(mp,root,0,0);
        for(auto i:mp)
        {
            sort(i.second.begin(),i.second.end());
            vector<int>temp;
            for(auto pp:i.second)
            {
                temp.push_back(pp.second);
            }
            ver.push_back(temp);
        }
        
        return ver;
    }
    
};
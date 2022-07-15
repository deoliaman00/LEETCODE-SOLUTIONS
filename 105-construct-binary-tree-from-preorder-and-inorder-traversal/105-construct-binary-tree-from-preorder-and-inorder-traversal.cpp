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
    
    TreeNode *func(vector<int>& inorder,int inStart,int inEnd,vector<int>&preorder,int preStart,int preEnd,map<int,int>&mp)
    {
        if(inStart>inEnd || preStart>preEnd)return NULL;
        
        TreeNode *head=new TreeNode(preorder[preStart]);
        int ele=mp[head->val];
        int nEle=ele-inStart;
        
        head->left=func(inorder,inStart,ele-1,preorder,preStart+1,preStart+nEle,mp);
        head->right=func(inorder,ele+1,inEnd,preorder,preStart+nEle+1,preEnd,mp);
        
        return head;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder)
    {
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++)
        {
            mp[inorder[i]]=i;
        }
        return func(inorder,0,inorder.size()-1,preorder,0,preorder.size()-1,mp);
        
    }
};
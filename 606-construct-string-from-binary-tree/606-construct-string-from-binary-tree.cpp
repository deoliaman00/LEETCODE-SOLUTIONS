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
    string f(TreeNode *root)
    {
        
        string s=to_string(root->val);
        if(root->left!=NULL)
        {
            s+='('+f(root->left)+')';
        }
        if(root->right!=NULL)
        {
            if(root->left==NULL)
            {
                s+="()";
            }
            s+='('+f(root->right)+')';
        }       
        return s;
    }
    
    string tree2str(TreeNode* root)
    {
        //string ans="";
        return f(root);
        
       // return ans;
    }
};
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
    int dfs(TreeNode* root)
    {
        if( root == NULL ) return 0;
        
        int count = root->val == 1 ? 1 : 0;
        
        int left = dfs(root->left);
        int right = dfs(root->right);
        
        if( left == 0)
        {
            
            
            root->left = NULL;
        }
        
        if(right == 0)
        {
            root->right = NULL;
        }
        
        return count + left + right;
    }
public:
    TreeNode* pruneTree(TreeNode* root) {
        if(root == NULL) return root;
    
        int one = dfs(root);
        
        return one == 0 ? NULL : root ;
    }
};
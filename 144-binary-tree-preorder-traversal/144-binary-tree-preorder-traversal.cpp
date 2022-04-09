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
    vector<int> preorderTraversal(TreeNode* root)
    {
        vector<int> preorder;
        stack<TreeNode*> st;
        while(root!=NULL || !st.empty())
        {
            if(root!=NULL)
            {
                preorder.push_back(root->val);
                st.push(root);
                root= root->left;
            }
            else
            {
                root=st.top();
                st.pop();
                root= root->right;
            }
        }
        
        return preorder;
        
        
    }
};
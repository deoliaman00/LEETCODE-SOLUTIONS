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
      
        vector<int>arr;
          if(root==NULL)return arr;
        stack<TreeNode *>st;
        st.push(root);
        while(!st.empty())
        {
            TreeNode *var=st.top();
            st.pop();
            arr.push_back(var->val);
            if(var->right!=NULL)
            {
                st.push(var->right);
            }
            if(var->left!=NULL)
            {
                st.push(var->left);
            }
                       
        }
        
        return arr;
        
    }
};
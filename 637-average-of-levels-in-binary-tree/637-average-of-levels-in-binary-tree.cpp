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
    vector<double> averageOfLevels(TreeNode* root) 
    {
        
        vector<double>ans;
        
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
           double temp=0;
            double s=q.size();
           
            for(int i=0;i<s;i++)
            {
                 
                 TreeNode *temi=q.front();
                q.pop();
                if(temi->left)
                {
                    q.push(temi->left);
                }
                 if(temi->right)
                {
                    q.push(temi->right);
                }
                temp+=temi->val;                
            }
            ans.push_back(temp/s);
        }       
        return ans;
        
    }
};
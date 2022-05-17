/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void find(TreeNode* cloned,TreeNode* &ff,TreeNode* target)
    {
        if(cloned==NULL)
        {
            return;
        }
        
        find(cloned->left,ff,target);
        if(cloned->val==target->val)
        {
            ff=cloned;
            return;
        }
        find(cloned->right,ff,target);
    }

    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target)
    {
        TreeNode *finded=NULL;
        find(cloned,finded,target);
        return finded;
    }
    
};
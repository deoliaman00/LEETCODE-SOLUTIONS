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
    int f(TreeNode *root  ,int sum)
    {
        // base condition
        if(root == NULL) return 0; // first we will check if root is null, then there is no node, simply return 0;
        sum = (2 * sum) + root->val; // calculate sum of binary no.s into decimal no.s
        // checking if, current node we are processing is leaf & both left & right child node are null, if that's the case return sum;
        if(root->left == NULL && root->right == NULL) return sum;
        // and finally we will call both left subtree & right subtree and add them up
        return f(root->left, sum) + f(root->right, sum);
    }
    int sumRootToLeaf(TreeNode* root)
    {
        if(root==NULL)return 0;
        int ans=f(root,0);
        return ans;
        
    }
};
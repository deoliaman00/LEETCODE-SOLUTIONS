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
class BSTIterator {
public:
    
    
    
    stack<TreeNode *>ps;
    
    void pushAll(TreeNode *root)
    {
        while(root!=NULL)
        {
            ps.push(root);
            root=root->left;      
        }
    }
    
    
    
    
    
    
    BSTIterator(TreeNode* root) {
        pushAll(root); 
        
    }
    
    int next() {
        
        TreeNode *ansVal = ps.top();
        ps.pop();
        pushAll(ansVal->right);
        
        
        return ansVal->val;
        
        
    }
    
    bool hasNext() {
         if(!ps.empty()) return true;
        else
            return false;
        
        
    }
};


/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
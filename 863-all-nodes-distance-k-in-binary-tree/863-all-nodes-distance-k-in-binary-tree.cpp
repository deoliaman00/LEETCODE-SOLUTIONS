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
    
    void shiftParent(TreeNode *root,unordered_map<TreeNode*,TreeNode*>&mp)
    {
       queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty())
        {
            TreeNode *curr=q.front();
            q.pop();
            
            if(curr->left)
            {
            mp[curr->left]=curr;    
            q.push(curr->left);
            }
            
            if(curr->right)
            {
                mp[curr->right]=curr;    
               q.push(curr->right);
            }
        }
            
    }
    
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k)
    {
        unordered_map<TreeNode*,TreeNode*>mp;
              
        shiftParent(root,mp);
        unordered_map<TreeNode*,bool>visited;
        queue<TreeNode*>q;
        
        q.push(target);
        visited[target]=true;
        
        int count=0;
        
        
        while(!q.empty())
        {
            int size=q.size();
            if(count++==k)break;
           for(int i=0; i<size;i++)
           {
                TreeNode* curr=q.front();
                q.pop();
               
               if(curr->left && !visited[curr->left])
               {
                    q.push(curr->left);
                   visited[curr->left]=true;
                  
                   
               }
               if(curr->right && !visited[curr->right])
               {
                    q.push(curr->right);
                   visited[curr->right]=true;
                  
               }
               if(mp[curr] && !visited[mp[curr]])
               {
                   q.push(mp[curr]);
                   visited[mp[curr]]=true;
                   
                   
               }
           }
        }
        
        vector<int>ans;
        while(!q.empty())
        {
            TreeNode* a=q.front();q.pop();
            ans.push_back(a->val);
            
        }
        
        return ans;
    }
};
class Solution {
map<int,int>mp;
int count=0;
public:
    void dfs(TreeNode* root)
    {
        int countodd=0;
        int counteven=0;
        if(root==NULL)
            return;
        else
            mp[root->val]++;
        if(root->left==NULL && root->right==NULL)
        {
            for(auto it:mp)
            {
                if(it.second%2==0)
                    counteven+=it.second;
                else
                    countodd++;
            }
            if((counteven%2==0 && countodd==0)|| (counteven%2==0 && countodd==1))
                count++;
            
        }
        dfs(root->left);
        dfs(root->right);
        auto it=mp.find(root->val);
        it->second--;
        
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        dfs(root);
        return count;
    }
};
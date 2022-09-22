class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& ht) 
    {
        stack<int>st;
        vector<int>ans(ht.size(),0);
        
        for(int i=ht.size()-1;i>=0;i--)
        {
            while(!st.empty() && st.top()<ht[i])
            {
                ans[i]++;
                st.pop();
            }
            if(!st.empty())
            {
                ans[i]++;
            }
            st.push(ht[i]);
        }
        
        return ans;
    }
};
class Solution {
public:
    int kthFactor(int n, int k)
    {
        vector<int>ans;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                ans.push_back(i);
            }
        }
        
        int n1=ans.size();
        if(k>n1 ||k<=0)
        {
            return -1;
        }
    return ans[k-1];
    }
};



/*

Input: n = 12, k = 3
Output: 3
Explanation: Factors list is [1, 2, 3, 4, 6, 12], the 3rd factor is 3
    
Input: n = 7, k = 2
Output: 7
Explanation: Factors list is [1, 7], the 2nd factor is 7.    


*/
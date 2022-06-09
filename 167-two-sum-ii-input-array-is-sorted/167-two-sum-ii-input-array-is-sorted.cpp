class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target)
    {
         vector<int>ans;
        
        int j=num.size()-1;
        int i=0;
        while(i<j)
        {
            int sum=num[i]+num[j];
            if(sum==target)
            {
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
                
            }
            else if(sum>target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        
        return ans;
        
    }
};
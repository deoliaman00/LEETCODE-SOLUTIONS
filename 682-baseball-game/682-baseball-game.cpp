class Solution {
public:
    int calPoints(vector<string>& ops) 
    {
        vector<int> ans;
        int sum=0;
        for(auto i:ops)
        {
            if(i=="+")
            {
                int n=ans.size();
                int f=ans[n-1]+ans[n-2];
                ans.push_back(f);
            }
           else if(i=="D")
            {
                int d=2*ans.back();
                ans.push_back(d);
            }
            else if(i=="C")
            {
                ans.pop_back();
            }           
            else
            {
                
                ans.push_back(stoi(i));
            }
        }
   
        for(auto i:ans)
        {
            sum+= i;
        }
        
        
        
        return sum;
    }
};
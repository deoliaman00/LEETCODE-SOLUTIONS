class Solution {
public:
    vector<vector<int>> sub;
    set<vector<int>>c;
    
    void subsets(vector<int>ip, vector<int>op)
    {
        if(ip.size()==0)
        {  
            if(c.find(op)==c.end())
            {
                c.insert(op);
                sub.push_back(op);
            }
            return;
        }
        
        vector<int>op1=op;
        
        vector<int>op2=op;
        
        op2.push_back(ip[0]);
        
        ip.erase(ip.begin()+0);
        
        subsets(ip,op1);
        subsets(ip,op2);
        return;
        
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        
        vector<int>oup; sort(sub.begin(),sub.end());
        sort(nums.begin(),nums.end());
        subsets(nums,oup);
       
        return sub;
        
    }
};
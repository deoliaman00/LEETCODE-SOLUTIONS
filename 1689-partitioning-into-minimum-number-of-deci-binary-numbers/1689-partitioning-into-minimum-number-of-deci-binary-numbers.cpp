class Solution {
public:
    int minPartitions(string n)
    {
        int maxi=INT_MIN;
        for(auto itr:n)
        {
            int cc=itr-'0';
            maxi=max(cc,maxi);
        }
        
        return maxi;
        
    }
};
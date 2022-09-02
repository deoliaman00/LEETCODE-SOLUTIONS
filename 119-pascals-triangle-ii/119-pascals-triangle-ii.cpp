class Solution {
public:
    vector<int> getRow(int i) 
    {
        vector<int>arr;
        long val=1;
        for(long j=0;j<i;j++)
        {
            arr.push_back(val);
            val=(val*(i-j))/(j+1);
        }
        arr.push_back(1);
        return arr;
        
    }
};
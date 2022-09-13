class Solution {
public:
    vector<vector<int>>d;
    void f(int i,vector<int>&arr,int tar,vector<int>&temp)
    {
        if(tar==0)
        {
            d.push_back(temp);
            return ;
        }
        if(tar<0)
        {
            return;
        }
        if(i==arr.size())
        {
            return;
        }
        
        f(i+1,arr,tar,temp);
        // if(arr[i]<tar)
        // {
            temp.push_back(arr[i]);
            f(i,arr,tar-arr[i],temp);
            temp.pop_back();
       // }
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
       vector<int>temp;
        int tar=target;
        
        f(0,arr,tar,temp);
        return d;
    }
};
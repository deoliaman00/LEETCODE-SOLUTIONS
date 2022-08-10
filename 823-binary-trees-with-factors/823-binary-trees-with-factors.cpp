
class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr)
    {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        map<int,long long int>mp;
        for(int i=0;i<n;i++)
        {
            mp.insert({arr[i],1});
        }
        
        for(int indx=1;indx<n;indx++)
        {
            long long int count=0;
            auto it3=mp.find(arr[indx]);
            for(int prev=0;prev<indx;prev++)
            {
                if(arr[indx]%arr[prev]==0)
                {
                    // eg=> arr[indx]=> 10 so ====> 10%2==0 count of 2 and count of 5 is added to 10 map
                    auto it1=mp.find(arr[prev]);
                    auto it=mp.find(arr[indx]/arr[prev]);
                    if(it!=mp.end()){
                    count+=(it1->second)*(it->second);  
                    }
                }
                
            }
            it3->second+=count;
        }
        
        long long  int alo=0;
        for(auto mppr:mp)
        {
            alo+=mppr.second;
        }
        
        return alo%(1000000007);
        
    }
};
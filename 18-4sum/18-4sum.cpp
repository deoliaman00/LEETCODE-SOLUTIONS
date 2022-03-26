class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int p,q,r,s,n;
        n=nums.size();
       
        int sum;
        if(nums.empty()) return ans;
        
        for(p=0;p<n;p++)
        {
             int find3=target-nums[p];
            for(q=p+1;q<n;q++)
            {
                
                int find2=find3-nums[q];
                r=q+1;
                s=n-1;
                
                while(r<s)
                {
                    sum=nums[s]+nums[r];
                  if(sum<find2)
                  {
                      r++;
                  }
                  else if(sum>find2)
                  {
                      s--;
                  }
                  else
                  {
                      vector<int> a(4,0);
                      a[0]=nums[p];
                      a[1]=nums[q];
                      a[2]=nums[r];
                      a[3]=nums[s];
                      ans.push_back(a);
                      
                      // ELIMINATING THE SAME VALUES AND NOT CONSIDERING THEM IN THE SOLn ARRAY
                      // BOTH FROM P=1 Q=1 R=P+1 -> ++ -> ++ -> ++ S=n-1 ->-- -> -- -> -- -> --
                      while(r<s && nums[r]==a[2]) ++r;
                      while(r<s && nums[s]==a[3]) --s;       
                  } 
              }
                // EDGE CASE 2
                // HERE THE ARRAY MUST start with unique element that is why eliminating the same elements here 
                 while(q+1<n && nums[q+1]==nums[q]) ++q;
               
                
            }
            //EGDE CASE 3
            // HERE ALSO I HAVE DELETED THE COMMON ELEMENT THAT MIGHT OCCUR IN OUR SOLN TO ELEMINATE IT AND PROCEED FURTHER
             while(p+1<n && nums[p+1]==nums[p]) ++p;
        }
         return ans;
    }
   
};
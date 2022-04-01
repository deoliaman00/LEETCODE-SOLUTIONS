class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int min=INT_MAX;
        int i=0,j=height.size()-1;
        int maxi=INT_MIN,ans,diff;
        
        while(i<j)
        { diff=j-i;
         if(height[i]<height[j])
         {
          min=height[i];
             i++;
         }
         else
         {
            min=height[j];
            j--;
         }
           
            ans=diff*min;
            maxi=max(maxi,ans);
        }
        
        
        return maxi;
        
    }
};
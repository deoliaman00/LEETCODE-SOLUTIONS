class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int i=0,j=height.size()-1;
        int maxi=INT_MIN;
        int area=0;
        int areaM=INT_MIN,bred,len;
        
        while(i<j)
        {
         if(height[i]<height[j])
         {
             int len= height[i];
             maxi=max(maxi,len);
             bred=j-i;
             i++;  
             area=len*bred;
         }
        else
        {
            len=height[j];
            maxi=max(maxi,len);
            bred=j-i;
            j--;
            area=len*bred;
        }
            areaM=max(area,areaM);
        }
        return areaM;
        
        
    }
};
class Solution {
public:
    //NSL-> NEAREST SMALLEST LEFT 
    
     vector<int>NSL(vector<int>test1)
    {
        int n=test1.size();
        stack<pair<int,int>>s;
        vector<int>k;
       //  0  1  2  3  4  5 
      //   2  1  5  6  2  3
        
     //   -1 -1  1  2  1  4
        for(int i=0;i<n;i++)
        {
            if(s.empty()==true)
            {
                k.push_back(-1);
            }
            else if(s.top().first<test1[i])
            {
                k.push_back(s.top().second);
            }
            else
            {
                while((s.empty()==false)&&(s.top().first>=test1[i]))
                {
                    s.pop();
                }
                if(s.empty()==true)
                {
                    k.push_back(-1);
                }
                else
                {
                    k.push_back(s.top().second);
                }
            }
            s.push({test1[i],i});       
            
        }
        
        return k;
    }
     
  vector<int>NSR(vector<int>test1)
    {
        int n=test1.size();
        stack<pair<int,int>>s;
        vector<int>k;
       //  0  1  2  3  4  5 
      //   2  1  5  6  2  3
     
     //    1  7  4  4  7  7   NSR    //    7  7  4  4  7  1   
     
     //   -1 -1  1  2  1  4   NSL
     
     
        for(int i=n-1;i>=0;i--)
        {
            if(s.empty()==true)
            {
                k.push_back(n);
            }
            else if(s.top().first<test1[i])
            {
                k.push_back(s.top().second);
            }
            else
            {
                while((s.empty()==false)&&(s.top().first>=test1[i]))
                {
                    s.pop();
                }
                if(s.empty()==true)
                {
                    k.push_back(n);
                }
                else
                {
                    k.push_back(s.top().second);
                }
            }
            s.push({test1[i],i});       
            
        }
        
        reverse(k.begin(),k.end());
        
        return k;
    }
    
     vector<int>width(vector<int>A1,vector<int>A2)
     {
         int n=A1.size();
         vector<int>wid(n);
         for(int i=0;i<n;i++)
         {
             wid[i]=A2[i]-A1[i]-1;
         }
         
         return wid;
     }
    
    int largestRectangleArea(vector<int>& heights)
    {
        vector<int>A=NSL(heights);
        vector<int>B=NSR(heights);
        vector<int>C=width(A,B);
        int maxi=INT_MIN;
        int n=heights.size();
        
        
        for(int i=0;i<n;i++)
        {
            C[i]=heights[i]*C[i];
        }
        
        for(int i=0;i<n;i++)
        {
            maxi=max(C[i],maxi);
        }
        
        return maxi;
    }
};
class Solution {
public:
 int trap(vector<int>& height)
    {
          int n=height.size();
        int maxleft[n];
        int maxright[n];
        int ans[n];
        int max1=0;
        int max2=0;
        int sum=0;
        cout<<endl;
        cout<<"Value:";
        for(auto i:height)
        {
            cout<<i<<"  ";
        }
        cout<<endl;
        
        
        
        //FOR THE MAX-left ARRAY
        for(int i=0;i<n;i++)
        {
          if(max1<height[i])
            {
                max1=height[i];
            } 
            maxleft[i] = max1;
            
        }
        cout<<endl;
        cout<<"Value of max left:";
        for(auto i:maxleft)
        {
            cout<<i<<"  ";
        }
        cout<<endl;
        
        //for the max-right array
        for(int i=n-1;i>=0;i--)
        {
            if(i==0)
            {
                maxright[i]=*max_element(height.begin(),height.end());
            }
            if(max2<height[i])
            {
                max2=height[i];
            } maxright[i]=max2;
        }
        cout<<endl;
        cout<<"Value max-right:";
        for(auto i:maxright)
        {
            cout<<i<<"  ";
        }
        cout<<endl;
        
        
        //reverse(maxright,maxright+n);
       // maxright[n-1]=height[n-1];
        
        
        
        
        for(int i=0;i<n;i++)
        {
         ans[i]=(min(maxleft[i],maxright[i])-height[i]);   
        }
        
        cout<<endl;
        cout<<"Value ans:";
        for(auto i:ans)
        {
            cout<<i<<"  ";
        }
        cout<<endl;
        
        for(auto i:ans)
        {
            sum+=i;
        }
        
        
        return sum;
    }


  
};
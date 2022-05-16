class Solution {
public:
/*

1.> for every row consider as 1 block of height 
2.> write maximum are in histogram
3.> for MAH 
    a> create a left array of next smaller element  to left
    b> create a right array of next smaller to right
    c> create a width array
    d>make area array 
    e> take max area
4> for all row it return a max area
5> take maximu of all returned value
6> which is our answer



*/
int MAH(int*arr,int n)
{  // next smaller to right side
    stack<pair<int,int>>stk1;
    vector<int>right;
    for(int i=n-1;i>=0;i--)
    {
        while(!stk1.empty() and stk1.top().first>=arr[i])
        {
            stk1.pop();
        }
        if(stk1.empty())
        {
            right.push_back(n);
        }
        else
            right.push_back(stk1.top().second);
        
        stk1.push({arr[i],i});
    }
    reverse(right.begin(),right.end());
    // next smaller to left side of array
    
    stack<pair<int,int>>stk2;
    vector<int>left;
    for(int i=0;i<n;i++)
    {
        while(!stk2.empty() and stk2.top().first>=arr[i])
        {
            stk2.pop();
        }
        if(stk2.empty())
        {
            left.push_back(-1);
        }
        else
        {
            left.push_back(stk2.top().second);
        }
        stk2.push({arr[i],i});
    }
    
    // make width array and area area;
    vector<int>area;
    for(int i=0;i<n;i++)
    {
        area.push_back((right[i]-left[i]-1)*arr[i]);
    }
    int no=*max_element(area.begin(),area.end());
    return no;
    
}

int maximalRectangle(vector<vector<char>>& matrix) 
{   if(matrix.empty())
    return 0;
    int n=matrix[0].size();
     
    
     int arr[200];
     vector<int>check;
     for(int i=0;i<n;i++)
     {
         arr[i]=0;
     }
    for(int i=0;i<matrix.size();i++)
    {     int k=0;
        for(int j=0;j<matrix[0].size();j++)
        {
            if(matrix[i][j]=='1')
            {
                arr[k]=arr[k]+1;
                 k++;
                
            }
            else
            {
                arr[k]=0;
                k++;
            }
                
       }
       
      int no=MAH(arr,n);
       
      check.push_back(no);
    }
    int ans=0;
    ans=*max_element(check.begin(),check.end());
    return ans;
}
};
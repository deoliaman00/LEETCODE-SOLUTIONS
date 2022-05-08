class Solution {
public:
    int largestRectangleArea(vector<int>& heights) 
    {
       stack<int>checker;
        int n=heights.size();
        int leftMin[n],rightMin[n];
        
        for(int i=0;i<n;i++)
        {
            while((checker.empty()==0)&&(heights[checker.top()]>=heights[i]))
            {
                checker.pop();
                // two conditions are checked here 
                // 1st
                // if the stack is empty
                // 2nd
                // if the index which is inserted in the stack and the value at that 
                // index is greater than incomong value then keep popping up
                // all the elements so at last the element smaller than it will be 
                // left in the stack which we will be inserting in the array left
            }
            if(checker.empty()!=0)
            {
                leftMin[i]=0; // case unique if there is no element smaller than the val at height
                                // then the 0th element will be its leftmostsmallest element
            }
            else
            {
                leftMin[i]= checker.top()+1;
                // case unique if there is element smaller than the val at height
                // then the top +1  element will be its leftmostsmallest element
            }
            
            checker.push(i); // at the last this element will be also inserted in the stack
            
        }
            
        
        // clearing the stack back to zero
        
            while(checker.empty()==0)
            {
                checker.pop();
            }
        // rightMost array 
        // we will find the element that is right most small than the current value
        for(int i=n-1;i>=0;i--)
        {
            while((checker.empty()==0)&&(heights[checker.top()]>=heights[i]))
            {
                checker.pop();
            }
            
            if(checker.empty()!=0)
            {
                rightMin[i]=n-1;
            }
            else
            {
                 rightMin[i]=checker.top()-1;
            }
            checker.push(i);
        }
        
        int Maxi=0;
        
        for(int i=0;i<n;i++)
        {
            Maxi=max(Maxi,heights[i]*(rightMin[i]-leftMin[i]+1));
        }
        
    return Maxi;
    
    }
};
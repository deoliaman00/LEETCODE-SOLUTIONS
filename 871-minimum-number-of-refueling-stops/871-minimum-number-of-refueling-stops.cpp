class Solution {
public:
    int minRefuelStops(int t, int sF, vector<vector<int>>&arr)
    {
        //t = 100, sF = 10, arr = [[10,60],[20,30],[30,30],[60,40]]
        priority_queue<int>pq;
        int distReached=sF;
        int steps=0;
        int i=0;
        while(distReached<t)
        {
            while(i<arr.size() && arr[i][0]<=distReached)
            {
                pq.push(arr[i][1]);
                i++;
                
            }
            if(pq.empty())return -1;
          
                distReached+=pq.top();
                pq.pop();
                steps++;
        }
        return steps;
    }
};
class MyCalendarThree {
public:
      multiset<pair<int,int>> ans;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        
        int sum=0;
        int maxCnt=0;
        ans.insert(make_pair(start,1));
        ans.insert(make_pair(end,-1));
        for(auto i:ans)
        {
         sum+=i.second;
             maxCnt = max(sum, maxCnt);
           
        }
        return maxCnt;
        
    } 
        
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */
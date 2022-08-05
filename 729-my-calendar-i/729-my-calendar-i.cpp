class MyCalendar {
private:
    map<int,int>mp;
public:
    MyCalendar() {}
  
    bool book(int start, int end)
    {
        mp[start]++; // +1 on that start
        mp[end]--; // -1 on that index
        int sum=0;
        for(auto i:mp)
        {
            sum+=i.second;
            if(sum>1)
            {
                mp[start]--;
                mp[end]++;
                return false;
            }
            
        }
        
        return true;
    }};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
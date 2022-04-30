class MyHashMap {
public:
    vector<list<pair<int,int>>>ans;
    int size=10;
    MyHashMap()
    {
        ans.resize(size);
        
    } 
    int keygive(int n)
    {
        return n%size;
    }
    void put(int key, int value)
    {
     int f=keygive(key);
        for(auto it=ans[f].begin();it!=ans[f].end();it++)
        {
            if(it->first==key)
            {
                it->second=value;
                return;
            }
        }
        ans[f].push_back({key,value});    
        
    }
    
    int get(int key)
    {
        int f=keygive(key);
        for(auto it=ans[f].begin();it!=ans[f].end();it++)
        {
            if(it->first==key)
            {
                return it->second;
            }
        }
        return -1;
    }    
    void remove(int key)
    {
        
      int f=keygive(key);
        for(auto it=ans[f].begin();it!=ans[f].end();it++)
        {
            if(it->first==key)
            {
                ans[f].erase(it);
                return;
            }
        }  
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
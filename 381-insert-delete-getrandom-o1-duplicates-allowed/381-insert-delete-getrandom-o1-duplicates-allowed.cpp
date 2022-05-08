class RandomizedCollection {
public:
    unordered_map<int,unordered_set<int>>map;
    vector<int>ans;
    
    RandomizedCollection()
    {
        map.clear();
        ans.clear();
    }
    
    bool insert(int val)
    {
        bool flag=false;// if element is already present in the vector as well as the hashmap
        if(map[val].size()==0)
        {
            flag=true; // element not present
        }
        map[val].insert(ans.size());
        ans.push_back(val);
        return flag;
        
    }
    
    bool remove(int val) 
    {
        // return true if present
        // return false if not present 
        bool flag=true;
        if(map[val].size()==0)
        {
            return false;
        }
         int k= *map[val].begin(); // index of value to be removed from the map as well as vector
            map[val].erase(k);  // index erased from the map;
       if(map[ans[ans.size()-1]].size()!=0)
       {
           int l=ans[ans.size()-1]; // last value inserted into l from vector [1,1,2];
           map[l].erase(ans.size()-1);// going to the last value into the map and erasing its last index
           
           map[l].insert(k); // inserting its new index into the map too
           
           
           
           swap(ans[k],ans[ans.size()-1]);// swapping the last element from the map/from the vector and the first element from the vecotor 
       }
        ans.pop_back(); // deleting the last element 
        return flag; // returning the flag
        
    }
    
    int getRandom() {
        return ans[rand()%ans.size()];
        
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
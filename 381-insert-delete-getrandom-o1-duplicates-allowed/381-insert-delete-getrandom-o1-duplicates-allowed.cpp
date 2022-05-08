// class RandomizedCollection {
// public:
//     unordered_map<int,set<int>> um;
//     vector<int> v;
//     int size;
//     RandomizedCollection() {
//         v.resize(100005,-1);
//         size=0;
//     }
    
//     bool insert(int val) {
//         bool flag;
//         if(um.count(val))
//             flag=false;
//         else
//             flag=true;
//         um[val].insert(size);
//         v[size] = val;
//         size++;
//         return flag;
//     }
    
//     bool remove(int val) {
//         if(um.count(val) == 0)
//             return false;
//         auto it = um[val].end();
//         --it;
//         int x = *it;
//         um[val].erase(it);
//         if(um[val].size() == 0)
//             um.erase(val);
//         if(size == 1 || x == size-1)
//         {
//             size--;
//             v[x] = -1;
//             return true;
//         }
//         v[x] = v[size-1];
//         it = um[v[size-1]].end();
//         --it;
//         um[v[size-1]].erase(it);
//         um[v[size-1]].insert(x);
//         v[size-1]=-1;
//         size--;
//         return true;
//     }
    
//     int getRandom() {
//         return v[rand()%size];
//     }
// };
    
class RandomizedCollection {
public:
    unordered_map<int,unordered_set<int>>mp;
    vector<int>v;
    
    
    RandomizedCollection() {
       mp.clear();   
       v.clear();
    }
    
    
    bool insert(int val) {
 
        bool flag=0;
        if(!mp[val].size())
            flag=1;

        mp[val].insert(v.size());
        v.push_back(val);
        
        return flag;
    }
    
    
    
    
    bool remove(int val) {
        
        if(!mp[val].size())
            return 0;
        
        int k=*mp[val].begin();
        mp[val].erase(k);
        
     if(mp[v[v.size()-1]].size())
     {  
         int l=v[v.size()-1];
         mp[l].erase(v.size()-1);
         mp[l].insert(k);
         swap(v[k],v[v.size()-1]);
     }
        
        v.pop_back();
        return 1;
    }
    
    
    
    
    
    int getRandom() {
      return v[rand()%v.size()];
    }
};


/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
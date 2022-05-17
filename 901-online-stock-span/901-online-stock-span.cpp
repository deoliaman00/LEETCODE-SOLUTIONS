class StockSpanner {
public:
   // vector<int>qust;
    //stack<pair<int,int>>s;
    //vector<int>ans1,ans;
        
    StockSpanner() {}
     stack<pair<int, int>> s;
    int next(int price) {
        int res = 1;
        while (!s.empty() && s.top().first <= price) {
            res += s.top().second;
            s.pop();
        }
        s.push({price, res});
        return res;
    }
    
//     int next(int price)
//     {
//      qust.push_back(price);
//         int n=qust.size();
//         for(int i=0;i<n;i++)
//         {
//             if(s.size()==0)
//             {
//                 ans1.push_back(1);
//             }
//             else if(s.top().first>=qust[i])
//             {
//                 ans1.push_back(s.top().second);
//             }
//             else
//             {
//                 while(s.top().first<=qust[i]&& s.size()!=0)
//                 {
//                     s.pop();
//                 }
//                 if(s.size()==0)
//                 {
//                     ans1.push_back(1);
//                 }
//                 else
//                 {
//                     ans1.push_back(s.top().second);
//                 }
//             }
//              s.push({qust[i],i});
//         }
        
//         for(int i=0;i<n;i++)
//         {
//             ans[i]=ans1[i]-i;
//         }
        
         
//         for(int i=0;i<n;i++)
//         {
//             cout<<ans[i]<<" ";
//         }cout<<endl;
//        return ans[n-1];
        
           
//     }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
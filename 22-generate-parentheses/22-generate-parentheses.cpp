class Solution {
public:
     
    void func(vector<string>&an,int op,int cl,string a)
    {
        if(op==0 && cl==0)
        {
            an.push_back(a);            
            return;
        }
        if(op!=0)
        {
            string s=a;
            s+="(";
            func(an,op-1,cl,s);
           
        }
        if(cl>op)
        {
          string s2=a;
            s2+=")";
            func(an,op,cl-1,s2);
            
        }  
}
    
    
    
    
    
    
    
    vector<string> generateParenthesis(int n)
    {
        vector<string>ans;
        int open=n,close=n;
        string as="";
        func(ans,open,close,as);
        return ans;
    }
};
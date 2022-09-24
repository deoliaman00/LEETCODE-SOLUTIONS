class Solution {
public:
    bool fun(string s,string p,int i,int j){
        if(i==-1 && j==-1) return true;
        if(i!=-1 && j==-1) return false;
        if(i==-1 && j!=-1){
            if(p[j]=='*') return fun(s,p,i,j-2);
            else{
                return false;
            }
        }
        else{
            if(s[i]==p[j] || p[j]=='.') return fun(s,p,i-1,j-1);
            else if(p[j]=='*'){
                if(s[i]==p[j-1] || p[j-1]=='.') return fun(s,p,i-1,j) || fun(s,p,i,j-2);
                else{
                    return fun(s,p,i,j-2);
                }
            }
            else{
                return false;
            }
        }
    } 
    bool isMatch(string s, string p) 
    {
        int m=s.size()-1;
        int n=p.size()-1;
        return fun(s,p,m,n);
        
    }
};

/*


----->  . matches single character
----->  * matches 0 or many characters

*/
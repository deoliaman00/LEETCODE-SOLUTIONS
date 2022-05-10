class Solution {
public:
    string simplifyPath(string path)
    {
        //    /home/ => /home      /../  => /      /home//foo/    =>   /home/foo
        stack<string>a;
        string rem;
         
        int n=path.size();
        for(int i=0;i<n;i++)
        {
            if(path[i]=='/')
            {
                continue;
            }
            string temp;
            
           
            
            //int n=path.length();
        while(i<n && path[i]!='/')
        {
            temp+=path[i];   
            i++;
                
        }
            if(temp==".")
            {
                continue;
            }
            else if(temp=="..")
            {
                if(a.empty()==0)
                {
                    a.pop();
                }
            }
            else
            {
                a.push(temp);
            }
        
    }
        
        while(a.empty()==0)
        {
            rem="/"+a.top()+rem;
            a.pop();
        }
        if(rem.size()==0)
        {
            return "/";
        }
        
        return rem;
    }
};
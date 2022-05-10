class Solution {
public:
    string simplifyPath(string path)
    {
        //    /home/ => /home      /../  => /      /home//foo/    =>   /home/foo
        stack<string>a; // a stack will be used to enter the fields
        string rem; // a extra string for managing final ans
         
        int n=path.size(); // size of string
        
        for(int i=0;i<n;i++)
        {
            if(path[i]=='/') // if the first element starts with /
            {
                continue;
            }
            string temp; // temp used to add the result to rem
            
           
            
            //int n=path.length();
        while(i<n && path[i]!='/') // eg-> /../teiop////opop//  => ".." and "teiop" and "opop"     
        {
            temp+=path[i];    //  i will stop if the path encounters / 
            i++;
                
        }
            if(temp==".") // the case at which it is neglected 
            {
                continue;
            }
            else if(temp=="..") // the case at which we will pop the previous entry and move further
            {
                if(a.empty()==0) // if stack empty is equals false then pop the previous entry 
                {
                    a.pop();
                }
            }
            else
            {
                a.push(temp); // if temp is string "aman" b/w ////aman/
            }
        
    }
        
        while(a.empty()==0) // jabtk stack is not empty pop kro 
        {
            rem="/"+a.top()+rem; // ist try-> /foo  iind try->  /true/foo
            a.pop();
        }
        if(rem.size()==0) // for case /../ 
        {
            return "/";
        }
        
        return rem;
    }
};
class Solution {
public:
    bool isPalindrome(string s) 
    {
        vector<char>a;
        
        int i,j;
        i=0,j=s.length();
        //s.erase(remove(s.begin(),s.end(),' '),s.end());
        cout<<s<<endl;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s<<endl;
        for(int i=0;i<j;i++)
        {
            if(isalnum(s[i])!=0)
            {
              a.push_back(s[i]);  
            }
        }
        for(auto i:a)
            cout<<i;
        cout<<endl;
    i=0,j=a.size()-1;
        // race a car -> raceacar-----racaecar
        while(i<j)
        {
            if(a[i++]!=a[j--])
                return false;
        }
        
        return true;
    }
};
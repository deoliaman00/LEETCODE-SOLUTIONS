class Solution {
public:
    string largestGoodInteger(string num)
    {
        // 6 7 7 7 1 3 3 3 3 9 "
        // 0 1 2 3 4 5 6 7 8 9 
        vector<int>a;
        int n=num.length();
        int maxi=INT_MIN;
        int count=0;
        for(int i=0;i<n-2;i++)
        {
            if(num[i]==num[i+1] && num[i+1] ==num[i+2])
            {
                string substring = "";
                substring =string(3,num[i]);
               // cout<<substring<<endl;
                a.push_back(stoi(substring));
                cout<<a.back()<<endl;
            }
        }
        
        for(auto i:a)
        {
            maxi=max(maxi,i);
        }
        string str= to_string(maxi);
        //str=
        if(maxi==INT_MIN)
        {
            return "";
        }
        if(str=="0")
        {
           str=string(3,'0');
            return str;
        }
        return str;
        
    }
};
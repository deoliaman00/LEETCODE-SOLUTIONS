class Solution {
public:
    string pushDominoes(string d) 
    {
        int n=d.size();
        vector<int>lC(n,0);
        vector<int>rC(n,0);
    
        // left->right
       // 0 to n
        int time=1;
        char prev='.';
        for(int i=0;i<n;i++)
        {
            if(d[i]=='R')
            {
                prev='R';
                 time=1;
                continue;                
            }
            else if(d[i]=='L')
            {
               
                prev='L';
            }
            else if(d[i]=='.' && prev=='R')
            {
                lC[i]=time;
                time++;
                prev='R';
            }            
        }
        time=1;
        prev='.';
        
        for(int i=n;i>=0;i--)
        {
            if(d[i]=='L')
            {
                prev='L';
                 time=1;
                continue;                
            }
            else if(d[i]=='R')
            {
               
                prev='R';
            }
            else if(d[i]=='.' && prev=='L')
            {
                rC[i]=time;
                time++;
                prev='L';
            }            
        }
        
        string op="";
        
        for(int i=0;i<n;i++)
        {
            if(rC[i]==0 && lC[i]==0)
            {
                op+=d[i];
            }
            else if(rC[i]==lC[i])
            {
                op+='.';
            }
            else if(lC[i]==0)
            {
                op+='L';
            }
            else if(rC[i]==0)
            {
                op+='R';
            }
            else if(rC[i]<lC[i])
            {
                op+='L';
            }
            else 
            {
                op+='R';
            }
        }
        
        return op;     
        
    }
};


/*

Input: 
n = 0 1 2 3 4 5 6 7 8 9 10 11 12 13
d = . L . R . . . L R . .  L  .  .
t:  L L . R R . L L R R L  L  .  .

*/
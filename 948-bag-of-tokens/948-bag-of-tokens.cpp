class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power)
    {
        sort(tokens.begin(),tokens.end());
        int i=0,j,n;
        j=n=tokens.size();
        j--;
        int maxi=0;
        int score=0;
        
        while(i<=j)
        {
           if(power>=tokens[i])
           {
               score++;
               power-=tokens[i];
              i++;
               maxi=max(maxi,score);
           }
            else if(score>=1)
            {
                power+=tokens[j];
                j--;
               // i++;
                score--;
            }
            else
            {
                break;
            }
          //  i++;
        }
        
        return maxi;
    }
};
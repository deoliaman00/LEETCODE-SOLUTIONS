class Solution {
public:
    
    int dp[2][1000][1000];
    int f(int total,int turn,int i,int j,vector<int>& stones)
    {
        if(i>=j)return 0;
        if(dp[turn][i][j]!=-1)return dp[turn][i][j];
        if(turn==1)
        {
            int remSum=total-stones[i];
            int Lscore=f(remSum,1-turn,i+1,j,stones)+remSum;
            int remSumII=total-stones[j];
            int Rscore=f(remSumII,1-turn,i,j-1,stones)+remSumII;
            return dp[turn][i][j]=max(Lscore,Rscore);
        }
        else if(turn==0)
        {
            int remSum=total-stones[i];
            int Lscore=f(remSum,1-turn,i+1,j,stones)-remSum;
            int remSumII=total-stones[j];
            int Rscore=f(remSumII,1-turn,i,j-1,stones)-remSumII;
            return dp[turn][i][j]=min(Lscore,Rscore);            
        }
        return 0;
        
    }
    int stoneGameVII(vector<int>& stones) 
    {
        memset(dp,-1,sizeof(dp));
        int turn=1;// alice turn is running for the start;
        int total=0;
        for(auto l:stones)
        {
            total+=l;
        }
        
        return f(total,turn,0,stones.size()-1,stones);
    }
};
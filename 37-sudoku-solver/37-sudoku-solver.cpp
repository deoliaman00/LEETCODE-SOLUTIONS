class Solution {
public:
    
    bool checker(int r,int c,char ele,vector<vector<char>>board)
    {
        for(int i=0;i<board.size();i++)
        {
            if(board[i][c]==ele)
            {
                return false;
                
            }
            if(board[r][i]==ele)return false;
            if(board[3*(r/3)+i/3][3*(c/3)+i%3]==ele)
            {
                return false;
            }
        }
        
        return true;
    }
    bool solve(vector<vector<char>>&board)
    {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='.')
                {
                    for(char k='1';k<='9';k++)
                    {
                        if(checker(i,j,k,board))
                        {
                            board[i][j]=k;
                            if(solve(board))
                            {
                                return true;
                            }
                            else
                            {
                                board[i][j]='.';
                               // return false;
                            }
                        }
                    }
                     return false;
                    
                }
               
            }
        }
        
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) 
    {
        solve(board);
        
    }
};
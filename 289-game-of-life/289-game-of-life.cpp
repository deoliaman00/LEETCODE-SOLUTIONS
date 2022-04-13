class Solution {
public:
    int count(vector<vector<int>>& board,int i,int j)
    {
        int r=board.size();
        int c=board[0].size();
        int livec=0;
        //.... for horizontal 1
        if(j+1<c)
        {
            if(board[i][j+1]==1 || board[i][j+1]==3)
            {
                livec++;
            }
        }
        //.... for horizontal back 1
        if(j-1>=0)
        {
            if(board[i][j-1]==1 || board[i][j-1]==3)
            {
                livec++;
            }
        }
        //.... for vertical 1
        if(i+1<r)
        {
            if(board[i+1][j]==1 || board[i+1][j]==3)
            {
                livec++;
            }
        }
        //.... for vertical down 1
        if(i-1>=0)
        {
            if(board[i-1][j]==1 || board[i-1][j]==3)
            {
                livec++;
            }
        }
        
        //...... for diagonals
        
        if(i+1<r && j-1>=0)
        {
            if(board[i+1][j-1]==1 || board[i+1][j-1]==3)
            {
                livec++;
            }
        }
        if(i+1<r && j+1<c)
        {
            if(board[i+1][j+1]==1 || board[i+1][j+1]==3)
            {
                livec++;
            }
        }
        if(i-1>=0 && j-1>=0)
        {
            if(board[i-1][j-1]==1 || board[i-1][j-1]==3)
            {
                livec++;
            }
        }
        if(i-1>=0 && j+1<c)
        {
            if(board[i-1][j+1]==1 || board[i-1][j+1]==3)
            {
                livec++;
            }
        }
        
        return livec;
         
    }
    
    
    
    
    void gameOfLife(vector<vector<int>>& board)
    {
        //............. board = [[0,1,0],[0,0,1],[1,1,1],[0,0,0]]
       //...............Output: [[0,0,0],[1,0,1],[0,1,1],[0,1,0]]
        int r1=board.size(); // r1=4
        int c1=board[0].size(); // c1=3
        
        int tac=0;
        
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                tac=count(board,i,j);
                //total_active_cells= count(board,i,j);
                
                if(board[i][j]==1)
                {
                    if(tac<2 || tac>3)
                    {
                        board[i][j]=3;
                    }  
                }
                else if(board[i][j]==0)
                {
                    if(tac==3)
                    {
                        board[i][j]=2;
                    }
                   
                }
            }
        }
        
        
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                if(board[i][j]==3)
                {
                    board[i][j]=0;
                }
                else if(board[i][j]==2)
                {
                   board[i][j]=1;
                }
            }
        }
        
        
        
        
    }
};
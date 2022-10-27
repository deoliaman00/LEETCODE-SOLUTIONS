class Solution {
public:
    int shiftAndCount(vector<vector<int>>& A, vector<vector<int>>& B, int n, int i_off, int j_off) {
        int cnt = 0;
        
        for(int i=0; i<n; ++i) {
            int row = i+i_off;
            
            for(int j=0; j<n; ++j) {
                int col = j + j_off;
                
                if(row<0 || row>=n || col<0 || col>=n || A[row][col]+B[i][j] != 2) continue;
                
                ++cnt;
            }
        }
        
        return cnt;
    }
    
    int largestOverlap(vector<vector<int>>& A, vector<vector<int>>& B) {
        int n = A.size(), ans = 0;
        
        for(int i_off=-n+1; i_off<n; ++i_off) {
            for(int j_off=-n+1; j_off<n; ++j_off) {
                ans = max(ans, shiftAndCount(A, B, n, i_off, j_off));
            }
        }
        
        return ans;
    }
};
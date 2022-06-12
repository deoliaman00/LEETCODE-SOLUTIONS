class Solution {
public:
    int minOperations(vector<int>& n, int x)
    {
        int size = n.size();
          int total = 0;
          int len = 0;
          for(int i : n) total += i;
          if(total == x) return size;
          int need = total - x;
          int i = 0 , j = 0;
          int sum = 0;
          while( j < size ) {
                sum += n[j];  
                while(i < j && sum > need){
                        sum -= n[i++];
                }
                if(sum == need){
                    
                    len = max(len, j-i+1);
                }
                j++;
          } 
          if(len == 0) return -1;  
          return size-len;        
    }
};
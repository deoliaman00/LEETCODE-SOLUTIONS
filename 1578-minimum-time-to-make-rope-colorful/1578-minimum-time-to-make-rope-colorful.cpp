class Solution {
public:
    int minCost(string colors, vector<int>& nT) {
         int costp=0,ans=0,n=nT.size();
        char c='*';
        for(int i=0;i<n;i++){
            if(colors[i]==c){
                if(costp<nT[i]){
                    ans+=costp;
                    costp=nT[i];
                }
                else{
                    ans+=nT[i];
                }
            }else{
                c=colors[i];
                costp=nT[i];
            }
        }
        return ans;
    }
};
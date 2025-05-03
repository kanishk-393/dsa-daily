class Solution {
public:
    int captureForts(vector<int>& fort) {
        int maxi=0;
        int prev=-1;
        for(int i=0;i<fort.size();i++){
            if(fort[i]==-1 || fort[i]==1){
                if(prev!=-1 && fort[prev]!=fort[i]){
                    maxi=max(maxi,i-prev-1);
                }
                prev=i;
        }
        }
        return maxi;
    }
};
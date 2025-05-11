class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
               map<char,int>um;
        int j=0;
        int maxlen=0;
        int maxf=0;
        for(int i=0;i<s.length();i++){
            um[s[i]]++;
            maxf=max(maxf,um[s[i]]);
        
            while((i-j+1)-maxf>k){
                um[s[j]]--;
                j++;
            } 
            maxlen=max(maxlen,i-j+1);
            }
            return maxlen;
 
    }
};
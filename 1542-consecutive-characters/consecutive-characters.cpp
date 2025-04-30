class Solution {
public:
    int maxPower(string s) {
     int left=0;
     int right=0;
     int maxi=0;
     for( right=0;right<s.length();right++){
        if(s[left]!=s[right]){
left=right;
        }
        else{
            maxi=max(maxi,right-left+1);
        }
     }
     return maxi;
    }
};
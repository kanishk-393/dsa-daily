class Solution {
public:
    int minimumRecolors(string s, int k) {
       int i=0;
       int j=0;
       int op=0;
       int mini=INT_MAX;
       while(j<s.length()){

         if(s[j]=='W'){
    op++;
}
        if(j-i+1==k){
mini=min(mini,op);
if(s[i]=='W'){
op--;
}
i++;
 }

        j++;
       }
       return mini;
    }
};
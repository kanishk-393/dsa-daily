class Solution {
public:
    string findValidPair(string s) {
        map<int,int>um;
        string s1="";
        for(int i=0;i<s.length();i++){
            um[s[i]-'0']++;
        }
        for(int i=0;i<s.length()-1;i++){
            int a=s[i]-'0';
            int b=s[i+1]-'0';
            if(a!=b){
                if(um[a]==a && um[b]==b){
                    s1+=s[i];
                    s1+=s[i+1];
return s1;
                }
            }
            
        }
      return "";
    }
};
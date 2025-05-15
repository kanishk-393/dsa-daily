class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
     int inc=1;
     int dec=1;
     int maxlen=1;
     for(int i=1;i<arr.size();i++){
        if(arr[i]>arr[i-1]){
            inc=dec+1;
            dec=1;
        }
        else if(arr[i]<arr[i-1]){
            dec=inc+1;
            inc=1;
        }
        else{
            inc=dec=1;
        }
        maxlen=max(maxlen,max(inc,dec));
     }
     return maxlen;
    }
};
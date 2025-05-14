class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n=nums.size();
       vector<int>suffixmin(n);
       suffixmin[n-1]=nums[n-1];
       int leftmax=nums[0];
       for(int i=n-2;i>=0;i--){
        suffixmin[i]=min(suffixmin[i+1],nums[i]);
       } 
       for(int i=0;i<n;i++){
        leftmax=max(leftmax,nums[i]);
        if(leftmax<=suffixmin[i+1]){
            return i+1;
        }
       }
       return -1;
    }
};
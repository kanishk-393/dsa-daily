class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxdiff=-1;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]<nums[j] && i<j){
maxdiff=max(maxdiff,nums[j]-nums[i]);
                }
            }
        }
        return maxdiff;
    }
};
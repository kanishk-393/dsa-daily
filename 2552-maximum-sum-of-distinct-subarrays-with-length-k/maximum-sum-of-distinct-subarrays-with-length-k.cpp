class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        map<int,int>um;
        int j=0;
        long long  ans=0;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            um[nums[i]]++;
            sum+=nums[i];
            while(um[nums[i]]>1 || i-j+1>k){

                um[nums[j]]--;
                sum-=nums[j];
                j++;
                
            }
            if(i-j+1==k){
            ans=max(ans,sum);
            }
        }
        return ans;
    }
};
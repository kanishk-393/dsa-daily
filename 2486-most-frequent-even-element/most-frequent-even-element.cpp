class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>um;
        int maxi=-1;
        int mmaxi=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0 ){
                um[nums[i]]++;
            }
        }
        for(auto x:um){
            if(x.second>maxi){
                maxi=x.second;
                mmaxi=x.first;
            }
        }
        return mmaxi;
    }
};
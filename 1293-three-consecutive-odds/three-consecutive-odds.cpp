class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& nums) {
        int j=0;
        int count=0;
        int i=0;
        while(j<nums.size()){
            if(nums[j]%2!=0){
                count++;
                if(count==3){
                    return true;
                }
            }
            else{
                count=0;
                i=j;
            }
            j++;
        }
        return false;
    }
};
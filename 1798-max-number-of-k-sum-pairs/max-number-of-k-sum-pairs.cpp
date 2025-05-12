class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int,int>um;
        int count=0;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            int rem=k-num;
            
                if(um[rem]>0){
count++;
um[rem]--;
                
            }else{
            um[num]++;
            }
        }
        return count;
    }
};
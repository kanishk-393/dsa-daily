class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count =0;
        int i=0;
        int j=1;
        while(j<nums.size()){
            if(nums[i]==nums[j]){
                count++;
              
            }
           else{
            count=0;
           }
           if(count<2){
            i++;
            swap(nums[i],nums[j]);
          
           }
           j++;
        }
        return i+1;
    }
};
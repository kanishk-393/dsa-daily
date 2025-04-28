class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count =1;
        int i=0;
        int j=1;
        while(j<nums.size()){
            if(nums[i]==nums[j]){
                count++;
                
            }
           else{
            count=1;
           }
           if(count<=2){
            i++;
            nums[i]=nums[j];
          
           }
           j++;
        }
        return i+1;
    }
};
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
       

        unordered_map<int, int> mp;
        mp[0] = 1;

        int runningsum = 0;
        int count=0;

       for(int i=0;i<nums.size();i++){
        runningsum+=nums[i];
      int mod = ((runningsum % k) + k) % k;
        if(mp.find(mod)!=mp.end()){
            
   count+=mp[mod];
        }
           
mp[mod]++;
            
       }
       return count;
    }
};
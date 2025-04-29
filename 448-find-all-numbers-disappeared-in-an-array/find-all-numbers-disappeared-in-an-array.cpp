class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        map<int,int>um;
        for(int i=0;i<nums.size();i++){
um.insert ({nums[i],1});
        }
        for(int i=1;i<=nums.size();i++){
            if(um.find(i)==um.end()){
                ans.push_back(i);
            }
        }
        return ans;
        
    }
};
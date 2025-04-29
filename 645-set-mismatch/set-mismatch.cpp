class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
  map<int,int>um;
  vector<int>ans;
  for(int i=0;i<nums.size();i++){
    um[nums[i]]++;
  }
  for(auto &x:um){
    if(x.second==2){
        ans.push_back(x.first);
    }
  }
  for(int i=1;i<=nums.size();i++){
    if(um.find(i)==um.end()){
        ans.push_back(i);
    }
  }
        return ans;
    }
};
class Solution {
public:
typedef long long ll;

    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
          int n=nums.size();
          sort(nums.begin(),nums.end());
          vector<ll>prefsum(n+1,0);
          for(int i=0;i<nums.size();i++){
            prefsum[i+1]=prefsum[i]+nums[i];
          }
          nums.insert(nums.begin(),0);
          n++;
          vector<ll>ans;
          for(auto q :queries){
            ll lidx=lower_bound(nums.begin(),nums.end(),q)-nums.begin()-1;
            ll uidx=upper_bound(nums.begin(),nums.end(),q)-nums.begin();

            ll val=q*lidx-(prefsum[lidx]-prefsum[0]);
            if(uidx!=n){
val+=(prefsum[n-1]-prefsum[uidx-1])-q*(n-uidx);

            }
            ans.push_back(val);
          }
          return ans;
    }
};
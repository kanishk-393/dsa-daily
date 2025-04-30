class Solution {
public:
    long long makeSubKSumEqual(vector<int>& nums, int k) {
        int n=nums.size();
        int g =gcd(n,k);
        long long ans=0;
        for(int i=0;i<g;i++){
            vector<int>group;
            int j=i;
            while (true){
                group.push_back(nums[j]);
                j=(j+k)%n;
                if(j==i){
                    break;
                }
            }
            sort(group.begin(),group.end());
            int median=group[group.size() / 2];    
            for(int x:group){
    ans += abs(x - median);
            }
                    }
return ans;
    }
};
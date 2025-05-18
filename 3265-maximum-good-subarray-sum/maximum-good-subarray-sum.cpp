class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long long maximumSum = -1e15;

        map<int, int> numIndexMap;

        vector<long long> prefixSum(n); 
        prefixSum[0] = nums[0];        

 
        for (int i = 1; i < n; i++) {
            prefixSum[i] = prefixSum[i - 1] + nums[i];
        }

        numIndexMap[nums[0]] = 0; 

        
        for (int i = 1; i < n; i++) {
            long long target1 = nums[i] + k;
            long long target2 = nums[i] - k; 

        
            if (numIndexMap.find(target1) != numIndexMap.end()) {
                long long currentSum = prefixSum[i] -
                                       prefixSum[numIndexMap[target1]] +
                                       nums[numIndexMap[target1]];
                maximumSum = max(maximumSum, currentSum);
            }

            
            if (numIndexMap.find(target2) != numIndexMap.end()) {
                long long currentSum = prefixSum[i] -
                                       prefixSum[numIndexMap[target2]] +
                                       nums[numIndexMap[target2]];
                maximumSum = max(maximumSum, currentSum);
            }

           
            if (numIndexMap.find(nums[i]) != numIndexMap.end()) {
                if (prefixSum[i] >= prefixSum[numIndexMap[nums[i]]])
                    continue;
            }
            numIndexMap[nums[i]] = i;
        }

        
        if (maximumSum == -1e15)
            return 0;

        return maximumSum;
    }
};
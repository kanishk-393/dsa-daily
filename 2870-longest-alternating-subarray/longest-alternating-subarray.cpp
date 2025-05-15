class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
      int n = nums.size(); // Size of the input vector
        int maxi = -1; // Initialize the maximum length of an alternating subarray as -1
        
        for(int i = 0; i < n-1; i++) { // Outer loop for starting index of subarray
            bool ch = false; // Flag to track increasing or decreasing order
            
            for(int j = i + 1; j < n; j++) { // Inner loop for ending index of subarray
                if(!ch) { // Subarray is in increasing order
                    if(nums[j] - nums[j-1] == 1) { // Check for alternating pattern
                        ch = true; // Set flag to true
                        maxi = max(maxi, j - i + 1); // Update maximum length if necessary
                    } else {
                        break; // Break the inner loop if alternating pattern is not valid
                    }
                } else { // Subarray is in decreasing order
                    if(nums[j] - nums[j-1] == -1) { // Check for alternating pattern
                        ch = false; // Set flag to false
                        maxi = max(maxi, j - i + 1); // Update maximum length if necessary
                    } else {
                        break; // Break the inner loop if alternating pattern is not valid
                    }
                }
            }
        }
        
        return maxi;
    }
};
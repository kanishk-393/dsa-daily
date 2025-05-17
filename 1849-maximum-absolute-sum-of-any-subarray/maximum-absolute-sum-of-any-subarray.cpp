class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
    int  currentmax=0;
    int currentmin=0;
    int maxsum=0;
    int minsum=0;
    for(int num:nums){
        currentmax=max(num,currentmax+num);
            maxsum=max(maxsum,currentmax);
            currentmin=min(num,currentmin+num);
            minsum=min(minsum,currentmin);
    }
    return max(maxsum,abs(minsum));
    }
};
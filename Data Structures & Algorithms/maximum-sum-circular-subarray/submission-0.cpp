class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxi=INT_MIN,mini=INT_MAX;
        int totalSum=0;
        int currMax=0,currMin=0;

        for(int i=0;i<nums.size();i++){
            totalSum+=nums[i];

            currMax=max(nums[i],nums[i]+currMax);
            maxi=max(maxi,currMax);

            currMin=min(nums[i],nums[i]+currMin);
            mini=min(mini,currMin);

        }

        if(maxi<0) return maxi;

        return max(maxi,totalSum-mini);
    }
};
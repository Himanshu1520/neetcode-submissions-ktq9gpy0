class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<nums.size()){
            if(nums[i]!=i+1){
                
            if(nums[i]==nums[nums[i]-1]){
                return nums[i];
            }
            else{
                swap(nums[i],nums[nums[i]-1]);
            }
            }
            else{
                i++;
            }
        }

        return -1;
    }
};

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prod(nums.size(),1);
        for(int i=1;i<nums.size();i++){
            prod[i]= prod[i-1]*nums[i-1];
        }
        // return prod;

        int right=1;
        for(int i=nums.size()-1;i>=0;i--){
            prod[i]=prod[i]*right;
            right*=nums[i];
        }
        return prod;
    }
};

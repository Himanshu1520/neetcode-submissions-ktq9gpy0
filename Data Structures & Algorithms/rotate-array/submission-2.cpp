class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i=k%nums.size();
        reverse(nums.begin(),nums.end()-i);
        reverse(nums.end()-i,nums.end());
        reverse(nums.begin(),nums.end());

    }
};
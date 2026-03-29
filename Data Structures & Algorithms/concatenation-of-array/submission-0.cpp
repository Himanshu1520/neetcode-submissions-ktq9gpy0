class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int j;
        for(int i=0;i<nums.size()*2;i++){
            j=i;
            if(j>nums.size()-1){
               j=j-nums.size(); 
            }
            ans.push_back(nums[j]);
        }
        return ans;
    }
};
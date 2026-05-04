class Solution {
public:

    void combination(int n,int idx,vector<int> &nums,int target, vector<vector<int>> &vec,vector<int> &temp){
        if(idx==n){
            if(target==0){
                vec.push_back(temp);
            }
            return;
        }


        if(nums[idx]<=target){
            temp.push_back(nums[idx]);
            combination(n,idx,nums,target-nums[idx],vec,temp);
            temp.pop_back();
        }
        combination(n,idx+1,nums,target,vec,temp);

    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        int n=nums.size(),sum=0;
        vector<vector<int>> vec;
        vector<int> temp;


        combination(n,0,nums,target,vec,temp);

        return vec;
    }
};

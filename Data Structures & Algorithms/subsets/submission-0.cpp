class Solution {
public:

    void printF(int n, int idx,vector<vector<int>> &vec, vector<int> &nums, vector<int> &temp){
        if(idx==n){
            vec.push_back(temp);
            return;
        }

        temp.push_back(nums[idx]);
        printF(n,idx+1,vec,nums,temp);
        temp.pop_back();
        printF(n,idx+1,vec,nums,temp);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> vec;
        vector<int> temp;

        printF(n,0,vec,nums,temp);

        return vec;
    }
};

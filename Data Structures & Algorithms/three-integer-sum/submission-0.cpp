class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> vec;

        sort(nums.begin(),nums.end());

        for(int i=0;i<(int)nums.size()-2;i++){
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int j=i+1,k=nums.size()-1;
            int num= -1*nums[i];

            while(j<k){
                vector<int> svec;
                int sum= nums[j]+nums[k];

                if(sum==num){
                    svec.push_back(nums[i]);
                    svec.push_back(nums[j]);
                    svec.push_back(nums[k]);
                    vec.push_back(svec);
                    while (j < k && nums[j] == nums[j + 1]) j++;
                    while (j < k && nums[k] == nums[k - 1]) k--;
                    j++; k--;
                }
                else if(sum<num){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return vec;
    }
};
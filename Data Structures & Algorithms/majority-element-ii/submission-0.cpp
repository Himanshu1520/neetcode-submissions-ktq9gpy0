class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> vec;
        unordered_map<int,int> mp;
        int n= nums.size()/3;

        for(int a: nums){
            mp[a]++;
        }

        for(auto num: mp){
            if(num.second>n){
                vec.push_back(num.first);
            }
        }

        return vec;
    }
};
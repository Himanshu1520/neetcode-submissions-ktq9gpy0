class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        for(int num: nums){
            umap[num]++;
        }

        vector<vector<int>> vec(nums.size()+1);
        vector<int> result;

        for(auto a: umap){
            vec[a.second].push_back(a.first);
        }

        for(int i=nums.size();i>=0 && result.size()<k;i--){
            for(int num: vec[i]){

                result.push_back(num);
                if(result.size()==k){
                    break;
                }
            }
        }
        return result;
    }
};

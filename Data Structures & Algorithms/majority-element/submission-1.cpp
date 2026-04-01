class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(int n: nums){
            umap[n]++;
        }
        int maxCount=0, maxi=0;
        for(auto a: umap){
            if(a.second>maxCount){
                maxCount=a.second;
                maxi=a.first;
            }
        }
        return maxi;

    }
};
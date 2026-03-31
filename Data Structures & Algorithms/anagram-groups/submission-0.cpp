class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        vector<vector<string>> result;
        for(string s: strs){
            string key=s;
            sort(key.begin(),key.end());
            groups[key].push_back(s);
        }
        for(const auto& g: groups){
            result.push_back(g.second);
        }
        return result;
    }
};

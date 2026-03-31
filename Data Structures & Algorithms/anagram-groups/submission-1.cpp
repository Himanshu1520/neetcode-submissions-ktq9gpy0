class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> um;
        vector<vector<string>> result;

        for(string s: strs){
            vector<int> count(26,0);
            for(char c: s){
                count[c-'a']++;
            }
            um[count].push_back(s);
        }
        
        for(const auto& g: um){
            result.push_back(g.second);
        }
        return result;
    }
};

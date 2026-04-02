class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         string result = "";

    for(int i = 0; i < strs[0].size(); i++) {
        char current = strs[0][i];
        for(int j = 1; j < strs.size(); j++) {
            if(i >= strs[j].size() ||  strs[j][i] != current){
                return result;
            }
        }
        result += current;
    }
    return result;
    }
};
class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string="";
        for(string s: strs){
            encoded_string+= to_string(s.size()) + '#' + s;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> result;
    int i = 0;

    while (i < s.size()) {
        int j = i;
        while (s[j] != '#') j++;

        int len = stoi(s.substr(i, j - i));
        j++; 

        result.push_back(s.substr(j, len));
        i = j + len;
    }

    return result;
    }
};

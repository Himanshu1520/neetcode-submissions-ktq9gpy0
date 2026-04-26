class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<int> st;
        int len=0,left=0;

        for(int i=0;i<s.length();i++){
            while(st.count(s[i])){
                st.erase(s[left]);
                left++;
            }

            


            st.insert(s[i]);
            len= max(len, i-left+1);
        }

        return len;
    }
};

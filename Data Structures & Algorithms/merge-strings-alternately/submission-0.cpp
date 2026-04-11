class Solution {
public:
    string mergeAlternately(string word1, string word2) {
     int left=0,right=0;
     string combined="";
     while(left<word1.length() && right<word2.length()){
        combined+= word1[left];
        combined+= word2[right];
        left++;
        right++;
     }

     if(left<word1.length()){
        while(left<word1.length()){
            combined+=word1[left];
            left++;
        }
     }
     if(right<word2.length()){
        while(right<word2.length()){
            combined+=word2[right];
            right++;
        }
     }

     return combined;
    }
};
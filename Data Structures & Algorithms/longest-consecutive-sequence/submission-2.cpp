class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<1){
            return 0;
        }
        set<int> s(nums.begin(),nums.end());
        
        int count=1,temp=1;
        for(int a: s){
            if(s.count(a+1)){
                temp++;
                count=max(count,temp);
            }
            else{
                temp=1;
            }
        }

        return count;
    }
};

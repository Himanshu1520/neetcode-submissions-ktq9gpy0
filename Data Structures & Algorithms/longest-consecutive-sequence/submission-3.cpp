class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<1){
            return 0;
        }
        int count=1;
        unordered_set<int> s(nums.begin(),nums.end());
        for(int num: nums){

            if(!s.count(num-1)){
                int current=num;
                int temp=1;
            

            while(s.count(current+1)){
                current+=1;
                temp++;
            }
            

            count= max(count,temp);
            }
        }

        return count;
    }
};

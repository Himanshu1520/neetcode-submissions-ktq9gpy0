class Solution {
public:

    int XORsum(int n,int idx, int &count,vector<int> &nums,vector<int> &temp){
        
        if(idx==n){
            int res=0;
            for(int a: temp){
                res^=a;
            }
            count+=res;
            return count;
            
        }

        temp.push_back(nums[idx]);
        count=XORsum(n,idx+1,count,nums,temp);

        temp.pop_back();
        count=XORsum(n,idx+1,count,nums,temp);

        return count;


    }

    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        vector<int> temp;

        return XORsum(n,0,count,nums,temp);

    }
};
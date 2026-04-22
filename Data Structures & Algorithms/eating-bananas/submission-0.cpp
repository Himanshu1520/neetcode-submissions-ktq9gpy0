class Solution {
public:

    int calcTime(vector<int>& piles,int t){
        int ans=0;
        for(int i=0;i<piles.size();i++){
            ans+= ceil((piles[i]+t-1)/t);
        }

        return ans;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi= INT_MIN;

        for(int i=0;i<piles.size();i++){
            if(piles[i]>maxi){
                maxi=piles[i];
            }
        }

        int low=1,high=maxi;
        int ans=maxi;

        while(low<=high){
            int mid=(low+high)/2;

            int timeTaken=calcTime(piles,mid);

            if(timeTaken>h){
                low=mid+1;
            }
            else{
                ans =mid;
                high=mid-1;
            }
        }

        return ans;

    }
};

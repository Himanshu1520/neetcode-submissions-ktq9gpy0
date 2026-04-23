class Solution {
public:

    int calcDays(vector<int>& weights,int capacity){
        int i=0,sum=0,count=1;
        while(i<weights.size()){
            
            if(sum+weights[i]>capacity){
                count++;
                sum=weights[i];
            }
            else{
                sum+=weights[i];
            }
            i++;
        }

        return count;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int maxi=INT_MIN,sum=0;

        for(int i=0;i<weights.size();i++){
            maxi=max(weights[i],maxi);
            sum+=weights[i];
        }

        int low=maxi,high=sum;
        int ans=sum;
        while(low<=high){

            int mid= low+(high-low)/2;

            int countOfDays=calcDays(weights,mid);

            if(countOfDays<=days){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
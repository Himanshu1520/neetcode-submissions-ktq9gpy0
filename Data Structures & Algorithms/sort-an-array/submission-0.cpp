class Solution {
public:

    void merge(vector<int>& nums,int low,int mid,int high){
        vector<int> temp;
        int l=low,h=high;
        int middle=mid;
        while(low<=mid && middle+1<=high){
            if(nums[low]<nums[middle+1]){
                temp.push_back(nums[low]);
                low++;
            }
            else{
                temp.push_back(nums[middle+1]);
                middle++;
            }
        }

        while(low<=mid){
            temp.push_back(nums[low++]);
        }
        while(middle<=high){
            temp.push_back(nums[middle+1]);
            middle++;
        }

    int i=0;
        while(l<=h){
            nums[l]= temp[i];
            i++;
            l++;
        }

    }

    void mergeSort(vector<int> &nums,int low,int high){
        if(low>=high){
            return;
        }

        int mid=(low+high)/2;


        mergeSort(nums,low,mid);
        mergeSort(nums,mid+1,high);
        merge(nums,low,mid,high);
    }

    vector<int> sortArray(vector<int>& nums) {
        if(nums.size()<2){
            return nums;
        }
        int n=nums.size();
        mergeSort(nums,0,n-1);
        return nums;
    }
};
class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0,j=heights.size()-1;
        int maxi= 0;

        while(i<j){
            int temp= (j-i)*min(heights[i],heights[j]);

            if(temp>maxi){
                maxi=temp;
            }

            if(heights[i]<=heights[j]){
                i++;
            }
            else{
                j--;
            }

        }

        return maxi;
        
    }
};

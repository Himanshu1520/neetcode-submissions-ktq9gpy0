class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> st;

        for(int i=temperatures.size()-1;i>=0;i--){
            while(!st.empty() && st.top().first<=temperatures[i]){
                st.pop();
            }

            if(st.empty()){
                st.push({temperatures[i],i});
                temperatures[i]=0;
            }
            else{
                int temp=temperatures[i];
                temperatures[i]=st.top().second-i;
                st.push({temp,i});
            }

        }

        return temperatures;

    }
};

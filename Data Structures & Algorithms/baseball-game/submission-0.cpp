class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){
                int a=st.top();
                st.pop();
                int b= st.top();
                st.push(a);
                int res=a+b;
                st.push(res);
            }
            else if(operations[i]=="C"){
                st.pop();
            }
            else if(operations[i]=="D"){
                st.push(st.top()*2);
            }

            else{
                st.push(stoi(operations[i]));
            }

        }

    int sum=0;
            while(!st.empty()){
                sum+=st.top();
                st.pop();
            }

            return sum;

            


        
    }
};
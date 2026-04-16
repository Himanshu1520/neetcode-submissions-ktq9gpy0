class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(string s: tokens){
            if(s=="+"){
                int sum=0;
                sum+=st.top();
                st.pop();
                sum+=st.top();
                st.pop();
                st.push(sum);
            }

            else if(s=="-"){
                
                int num1= st.top();
                st.pop();
                int num2= st.top();
                st.pop();
                int diff=num2-num1;
                
                st.push(diff);
            }
            else if(s=="*"){
                int mul=1;
                mul*=st.top();
                st.pop();
                mul*=st.top();
                st.pop();

                st.push(mul);
            }

            else if(s=="/"){
                int num1= st.top();
                st.pop();
                num1=st.top()/num1;

                st.pop();
                st.push(num1);
            }
            else{
                st.push(stoi(s));
            }
        }

        return st.top();
    }
};

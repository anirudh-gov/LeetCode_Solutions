class Solution {
public:
    int scoreOfParentheses(string s) {
        
        stack<int> st;
        st.push(0);

        for(char ch:s){
            if(ch=='(') st.push(0);
            else{
                int t=st.top(); 
                st.pop();
                int v= (t==0)? 1: (2*t);
                st.top()+=v;
            }
        }
        return st.top();
    }
};

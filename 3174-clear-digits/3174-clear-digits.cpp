class Solution {
public:
    string clearDigits(string s) {
        if(s.length()==1) return s;
        stack<char> stk;
        for(int i=0;i<(int)s.length();i++){
            if(stk.empty()) stk.push(s[i]);
            else {
                if(isdigit(s[i]) && !stk.empty()) stk.pop();
                else if(!isdigit(s[i]))
                    stk.push(s[i]);
            }
        }
        string res = "";
        while(!stk.empty()){
            res=stk.top()+res;
            stk.pop();
        }

        return res;
    }
};
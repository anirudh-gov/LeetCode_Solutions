class Solution {
public:
    int minLength(string s) {
        ios_base::sync_with_stdio(false);
        if(s.length()<=1) return 1;
        stack<char> stk;
        stk.push(s[0]);
        int l = s.length();
        for(int i=1;i<l;i++){
            if(!stk.empty()){
                if(stk.top()=='A' && s[i]=='B') stk.pop();
                else if(stk.top()=='C'&& s[i]=='D') stk.pop();
                else stk.push(s[i]);
            }else{
                stk.push(s[i]);
            }
        }
        return stk.size();
    }
};
class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        int r= 1,st=0 ,b= -1;

        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                if(b== -1) b = i - 1;
                else{
                    st=b +1;
                    b=i-1;
                }
            }
            r =max(r,i-st +1);
        }
        return r;
    }
};
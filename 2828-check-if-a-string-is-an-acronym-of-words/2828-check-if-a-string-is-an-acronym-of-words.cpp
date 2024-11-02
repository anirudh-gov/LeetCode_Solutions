class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string res = "";
        for(auto str : words){
            res+=str[0];
        }
        if(res==s) return true;
        return false;
    }
};
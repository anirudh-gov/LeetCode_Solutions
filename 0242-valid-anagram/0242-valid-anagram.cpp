class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        
        int freq[26] = {0}; 
        for(int i=0; i<s.size(); i++){
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }
        for(auto c:freq){
            if(c<0){
                return false;
            }
        }
        return true;
    }
};
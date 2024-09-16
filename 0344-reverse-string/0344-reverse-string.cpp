class Solution {
public:
    void reverseString(vector<char>& s) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        
        int st=0;
        int e=s.size()-1;

        while(st<e){
            swap(s[st],s[e]);
            st++;
            e--;
        }
    }
};
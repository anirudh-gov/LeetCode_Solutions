class Solution {
public:
    void binString(int n, int lastPlace, string ans, vector<string>& v) {
        if (n == 0) {
            v.push_back(ans);
            return;
        }

        binString(n - 1, 1, ans + '1', v);
        if (lastPlace != 0) {
            binString(n - 1, 0, ans + '0', v);
        }
    }

    vector<string> validStrings(int n) {
        vector<string> v;
        binString(n, 1, "", v); 
        return v;
    }
};

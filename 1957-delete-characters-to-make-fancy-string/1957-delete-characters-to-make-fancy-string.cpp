class Solution {
public:
    string makeFancyString(string s) {
        ios_base::sync_with_stdio(false);
        string res = "";
        int count = 0;
        char prev = '\0';
        for (char c : s) {
            if (c == prev) {
                count++;
            } else {
                count = 1;
                prev = c;
            }
            if (count < 3) {
                res += c;
            }
        }
        return res;
    }
};
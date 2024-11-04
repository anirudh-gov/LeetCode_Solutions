class Solution {
public:
    string compressedString(string word) {
        string ans = "";
        stack<char> stk;
        int c = 1;
        stk.push(word[0]);

        for (int i = 1; i < word.length(); i++) {
            if (!stk.empty() && stk.top() == word[i]) {
                if (c < 9) {
                    c++;
                } else {
                    ans += to_string(c) + stk.top();
                    c = 1;
                }
            } else {
                ans += to_string(c) + stk.top();
                c = 1;  
            }
            stk.pop();
            stk.push(word[i]);
        }
        ans += to_string(c) + stk.top();

        return ans;
    }
};

class Solution {
public:

    vector<int> dp;
    Solution() : dp(31, -1) {}

    int fib(int n) {
        ios_base::sync_with_stdio(false);
        if(n==0||n==1) return n;

        if(dp[n]==-1)
            dp[n] = fib(n-1)+fib(n-2);

        return dp[n];
    }
};
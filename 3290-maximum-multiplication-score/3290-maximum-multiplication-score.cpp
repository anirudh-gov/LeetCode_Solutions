class Solution {
public:
    long long maxScore(vector<int>& a, vector<int>& b) {
        int n = b.size();
        
        vector<long long> dp0(n, LLONG_MIN), dp1(n, LLONG_MIN), dp2(n, LLONG_MIN), dp3(n, LLONG_MIN);
        
        dp0[0] = (long long)a[0] * b[0];
        for (int i = 1; i < n; i++) {
            dp0[i] = max(dp0[i - 1], (long long)a[0] * b[i]);
        }
        
        for (int i = 1; i < n; i++) {
            dp1[i] = max(dp1[i - 1], dp0[i - 1] + (long long)a[1] * b[i]);
        }
        
        for (int i = 2; i < n; i++) {
            dp2[i] = max(dp2[i - 1], dp1[i - 1] + (long long)a[2] * b[i]);
        }
        
        for (int i = 3; i < n; i++) {
            dp3[i] = max(dp3[i - 1], dp2[i - 1] + (long long)a[3] * b[i]);
        }
        
        
        return dp3[n - 1];

    }
};
class Solution {
public:
    bool isGood(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        int n = nums.size();
        vector<int> v(n, 0);

        for (int x : nums) {
            if (x >= n) return false;  
            v[x]++;
        }

        for (int i = 1; i < n - 1; i++) {
            if (v[i] < 1) return false;
        }

        if (v[n - 1] != 2) return false;

        return true;
    }
};
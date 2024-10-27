class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> cnt(n, 0);
        int r,l;
        
        for (int num :nums) {
            cnt[num - 1]++;
        }

        for (int i = 0; i < n; ++i) {
            if (cnt[i] == 0) 
                l = i + 1;
            if (cnt[i] == 2)
                r = i + 1;
        }
        return {r, l};
    }
};
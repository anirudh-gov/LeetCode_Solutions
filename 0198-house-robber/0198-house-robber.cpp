class Solution {
public:
    vector<int> dp;

    int sum(int n,vector<int>& nums){
        if (n<0) return 0;
        if (dp[n]!=-1) return dp[n];
        return dp[n] = max(nums[n]+sum(n-2, nums), sum(n-1,nums));
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        dp.resize(n,-1);
        return sum(n-1,nums);
    }
};

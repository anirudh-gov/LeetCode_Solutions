class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        for(int x : nums) s+=x;
        return (n*(n+1))/2 - s;
    }
};
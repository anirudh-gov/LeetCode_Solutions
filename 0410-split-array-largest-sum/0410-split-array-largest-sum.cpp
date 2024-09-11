class Solution {
public:
    bool isCorrect(vector<int>& nums, int n, int k, int mid) {
        int splits = 1; 
        int numSum = 0;

        for(int i = 0; i < n; i++) {
            if(numSum + nums[i] <= mid) {
                numSum += nums[i];
            } else {
                splits++; 
                if(splits > k || nums[i] > mid) {
                    return false;
                }
                numSum = nums[i];
            }
        }

        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int s = *max_element(nums.begin(), nums.end());
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int end = sum;
        int ans = -1;

        while(s <= end) {
            int mid = s + (end - s) / 2;

            if(isCorrect(nums, n, k, mid)) {
                ans = mid;
                end = mid - 1;
            } else {
                s = mid + 1;
            }
        }

        return ans;
    }
};

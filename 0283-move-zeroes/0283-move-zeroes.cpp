class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        ios::sync_with_stdio(false);
        int i = 0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[j], nums[i]);
                i++;
            }
        }

    }
};
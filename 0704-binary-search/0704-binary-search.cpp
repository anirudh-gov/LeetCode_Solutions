class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int st=0,end=n-1;
        int mid = st+((end-st)/2);

        while(st<=end){
            if (nums[mid]==target) return mid;
            else if(nums[mid]<target) st++;
            else end--;

            mid = st+((end-st)/2);
        }

        return -1;
    }
};
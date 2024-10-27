class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int n = nums.size();
        int rep,f=0,sum=nums[n-1];
        for(int i = 0; i < n-1; i++){
            if(nums[i]==nums[i+1] && f!=1){
                rep=nums[i];
                f=1;
            }
            sum+=nums[i];
        }


        return {rep,((n*(n+1))/2)-(sum-rep)};
    }
};
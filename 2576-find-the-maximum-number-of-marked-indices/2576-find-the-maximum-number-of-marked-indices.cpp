class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i =0,j=(n+1)/2,c=0;

        while(i<(n+1)/2&&j<n){
            if(2*nums[i]<= nums[j]){
                c+=2;
                i++;
                j++;
            } else
                j++;
        }
        return c;
    }
};
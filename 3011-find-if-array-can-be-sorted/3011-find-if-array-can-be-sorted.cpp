class Solution {
public:

    int countSetBits(int n){
        int c= 0;
        while(n>0){
            if((n&1)==1) c++;
            n>>=1;
        }
        return c;
    }

    bool canSortArray(vector<int>& nums) {

        int n=nums.size();
        for(int i=1;i<n;++i){
            for(int j=0;j<n-i;++j){
                if(nums[j]<=nums[j+1]){
                    continue;
                }else{
                    if(countSetBits(nums[j])==countSetBits(nums[j+1]))
                        swap(nums[j],nums[j+1]);
                    else
                        return false;
                }
            }
        }
        return true;

    }
};
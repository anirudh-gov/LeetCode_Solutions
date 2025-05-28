class Solution {
public:
    int minSizeSubarray(vector<int>& nums, int target) {
        long long s =accumulate(nums.begin(),nums.end(),0LL);
        int n=nums.size();
        long long q=target/ s, r=target%s;
        if(r==0)
            return q*n;
        
        unordered_map<long long, int> m;
        long long cur=0;
        int res =INT_MAX;
        for(int i=0;i<2*n;i++){
            cur+=nums[i % n];
            if(cur== r)
                res =min(res, i+1);
            
            if(m.count(cur-r))
                res= min(res,i-m[cur-r]);
            
            if (!m.count(cur))
                m[cur]= i;
        }
        return res== INT_MAX? -1:q*n + res;
    }
};
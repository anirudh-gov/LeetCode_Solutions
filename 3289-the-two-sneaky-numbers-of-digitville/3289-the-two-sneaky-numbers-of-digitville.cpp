class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n =  nums.size();
        vector<int> v(n,0);
        vector<int> v1;
        for(int x : nums){
            v[x]++;
            if(v[x] == 2){
                v1.push_back(x);
            }
        }
        return v1;
    }
};
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        
        map<int,vector<int>> mp;
        
        for(int n:arr){
            mp[__builtin_popcount(n)].push_back(n);
        }
        
        vector<int> ans;
        
        for(auto& p:mp){
            sort(p.second.begin(),p.second.end());
            ans.insert(ans.end(),p.second.begin(),p.second.end());
        }

        return ans;

    }
};
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int>  st;
        st.insert(arr.begin(), arr.end());
        map<int , int> mp;
        int i=1;
        for(auto n: st){
            mp[n]=i++;
        } 
        vector<int> ans;
        for(int x:arr){
            ans.push_back(mp[x]);
        }
        return ans;
    }
};
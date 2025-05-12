class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        sort(logs.begin(),logs.end(), [](vector<int> a,vector<int> b){
            return a[1] <b[1];
        });

        int m=queries.size();
        vector<pair<int,int>> q;

        for(int i=0;i<m;i++) q.push_back({queries[i],i});
        sort(q.begin(),q.end());
        unordered_map<int,int> mp;
        vector<int> a(m);
        int l=0, r=0;

        for(auto [t,i]: q){
            int w=t-x;
            while(r<logs.size()&&logs[r][1]<=t){
                mp[logs[r][0]]++;
                r++;
            }
            while(l<logs.size() &&logs[l][1]<w){
                int s=logs[l][0];
                if(--mp[s]==0) mp.erase(s);
                l++;
            }

            a[i]=n-mp.size();
        }

        return a;
    }
};
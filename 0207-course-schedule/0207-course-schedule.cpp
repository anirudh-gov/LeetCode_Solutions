class Solution {
public:
    bool solve(unordered_map<int, vector<int>>& pre, vector<int>& vis, int node, vector<int>& recVis) {
        
        vis[node] = 1;
        recVis[node] = 1;
        
        for (auto x : pre[node]) {
            if (!vis[x] && solve(pre, vis, x, recVis)) {
                return true; 
            } 
            else if (recVis[x]) {
                return true; 
            }
        }
        
        recVis[node] = 0; 
        return false;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        unordered_map<int, vector<int>> adj;
        vector<int> vis(numCourses, 0); 
        vector<int> recVis(numCourses, 0);
        
        for (const auto& prerequisite : prerequisites) {
            adj[prerequisite[1]].push_back(prerequisite[0]);
        }
        
        for (int i = 0; i < numCourses; i++) {
            if (!vis[i]) {
                if (solve(adj, vis, i, recVis)) {
                    return false; 
                }
            }
        }
        return true; 
    }
};

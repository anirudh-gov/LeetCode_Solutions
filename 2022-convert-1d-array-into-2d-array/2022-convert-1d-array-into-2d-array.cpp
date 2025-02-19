class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        ios_base::sync_with_stdio(false);
        if (original.size() != m * n) return {};

        vector<vector<int>> twod(m, vector<int>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                twod[i][j] = original[i * n + j];
            }
        }
        return twod;
    }
};
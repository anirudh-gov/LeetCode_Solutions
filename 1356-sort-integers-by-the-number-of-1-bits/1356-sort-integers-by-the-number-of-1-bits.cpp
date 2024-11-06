class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        
        vector<int> countBits[33];
        
        for (int n : arr) {
            countBits[__builtin_popcount(n)].push_back(n);
        }
        
        vector<int> result;
        
        for (int i = 0; i < 33; ++i) {
            if (!countBits[i].empty()) {
                sort(countBits[i].begin(), countBits[i].end());
                result.insert(result.end(), countBits[i].begin(), countBits[i].end());
            }
        }

        return result;

    }
};
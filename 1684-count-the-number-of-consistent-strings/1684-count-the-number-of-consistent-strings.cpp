class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        ios_base::sync_with_stdio(false);
        unordered_set<char> allowedSet(allowed.begin(), allowed.end());
        int count = 0;
        
        for (const string& word : words) {
            bool isConsistent = true;
            
            for (char c : word) {
                if (allowedSet.find(c)==allowedSet.end()) {
                    isConsistent = false;
                    break;
                }
            }
            
            if (isConsistent) {
                count++;
            }
        }
        return count;
    }
};
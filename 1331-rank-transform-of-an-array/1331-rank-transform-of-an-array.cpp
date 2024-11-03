class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        ios_base::sync_with_stdio(false);
        vector<int> sortedArr = arr;
        sort(sortedArr.begin(), sortedArr.end());
        unordered_map<int, int> rankMap;
        int rank = 1;
        
        for (int num : sortedArr) {
            if (rankMap.find(num) == rankMap.end()) {
                rankMap[num] = rank++;
            }
        }
        
        vector<int> ans;
        for (int num : arr) {
            ans.push_back(rankMap[num]);
        }
        
        return ans;
    }
};
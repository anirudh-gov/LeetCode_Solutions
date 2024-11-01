class Solution {
public:
    bool areNumbersAscending(string s) {
        istringstream stream(s);
        string t;
        int prevNum = -1;
        
        while (stream >> t) {
            if (isdigit(t[0])) {
                int currentNum = stoi(t);
                if (currentNum <= prevNum) {
                    return false;
                }
                prevNum = currentNum;
            }
        }
        
        return true;
    }
};
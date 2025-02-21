class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.size()-1;
        int res = 0;

        while(size>=0 && s[size]==' ') size--;
        while(size>=0 && s[size]!=' ') {res++; size--;}

        return res;
    }
};
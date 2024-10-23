class Solution {
public:
    bool isPalindrome(string s) {
        
        int l = 0, h = s.length() - 1;

        while (l < h) 
        {
            while (l < h && !isalnum(s[l])) l++;
            while (l < h && !isalnum(s[h])) h--;

            if (tolower(s[l]) != tolower(s[h])) 
                return false;
            l++;
            h--;
        }

        return true;
    }
};
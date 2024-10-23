class Solution {
public:
    int reverse(int x) {
        ios_base::sync_with_stdio(false);
        int rev = 0;

        while (x != 0) {
            int l = x % 10;
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && l > 7))
                return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && l < -8)) 
                return 0;

            rev = rev * 10 + l;
            x /= 10;
        }

        return rev;
    }
};
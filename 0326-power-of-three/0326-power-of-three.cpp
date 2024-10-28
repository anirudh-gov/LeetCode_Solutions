class Solution {
public:
    bool isPowerOfThree(int n) {
        ios_base::sync_with_stdio(false);
        long long w=1;
        for(int i=0;i<=20;i++){
            if(w==n){
                return true;
            }
            w=w*3;
        }
        return false;
    }
};
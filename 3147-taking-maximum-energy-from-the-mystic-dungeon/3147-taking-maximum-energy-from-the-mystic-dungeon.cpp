class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n=energy.size();
        int res= -1001;
        for (int i=n-1;i>=0;i--){
            if(i+k < n){
                energy[i]=energy[i] +energy[i+k];
            }
            res=max(res,energy[i]);
        }
        return res;
    }
};
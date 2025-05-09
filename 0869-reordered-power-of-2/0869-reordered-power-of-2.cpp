class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string r=to_string(n);
        sort(r.begin(),r.end());

        for(int i=0;i<31;i++){
            int p= 1<<i;
            string r1= to_string(p);
            sort(r1.begin(),r1.end());

            if(r1==r)
                return true;
        }
        return false;
    }
};
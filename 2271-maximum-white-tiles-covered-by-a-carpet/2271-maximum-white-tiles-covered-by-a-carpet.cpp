class Solution {
public:
    int maximumWhiteTiles(vector<vector<int>>& tiles, int carpetLen) {
        sort(tiles.begin(),tiles.end());
        int n=tiles.size();

        vector<int> v(n+1,0);

        for(int i=0;i<n;i++)
            v[i+1]=v[i]+ (tiles[i][1]-tiles[i][0]+1);

        int res= 0, j=0;

        for(int i=0;i<n;i++){
            int st=tiles[i][0], p=0;
            int end= st+carpetLen-1;
            
            while(j<n&& tiles[j][1]<end)
                j++;

            int f= v[j]-v[i];
        
            if(j<n &&tiles[j][0]<= end)
                p=end-tiles[j][0] +1;
            res = max(res,f+p);
        }
        return res;
    }
};
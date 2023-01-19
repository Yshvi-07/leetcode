class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int d=0;
        int r=0;
        for(int i=0;i<gain.size();i++){
            r=r+gain[i];
            if(d<r){
                d=r;
            }
        }
        return d;
    }
};
Console

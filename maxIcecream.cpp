class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        long long c=0;
        int r=0;
        for(int i=0;i<costs.size();i++){
            c=c+costs[i];
            if(c<=coins){
                r++;
            }
        }
        return r;
    }
};

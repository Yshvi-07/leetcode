class Solution {
public:
    int minBitFlips(int start, int goal) {
        
        int b=start^goal;
        int c=0;
        while(b){
            c+=b&1;
            b=b>>1;
        }
        return c;
    }
};

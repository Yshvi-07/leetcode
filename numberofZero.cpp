class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long a=0;long long g=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                
                g++;
                
            }
            else
            if(nums[i]!=0){
                g=0;
                
            }
            a+=g;
        }
        return a;
    }
};

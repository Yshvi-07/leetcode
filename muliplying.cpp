class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int c=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==original){
                original=2*original;
            }
        }
        return original;
    }
};

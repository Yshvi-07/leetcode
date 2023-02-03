class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int flag=1;
        int n=nums.size()/2;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i=i+2){
            if(nums[i]!=nums[i+1]){
                flag=0;
            }
        }
        return flag;
    }
};
Console

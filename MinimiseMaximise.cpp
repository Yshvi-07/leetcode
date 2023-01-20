class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int r=0;
        int m=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
      m=nums[i]+nums[nums.size()-1-i];
      
      if(m>r){
          r=m;
      }
      
      }
      return r;  
    }
};

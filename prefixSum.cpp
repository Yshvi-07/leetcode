class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int l=0;
        for(int i=0;i<nums.size();i++){
            l+=nums[i];

        }
        int s=0;
        int r=0;
        for(int i=0;i<nums.size();i++){
           l-=nums[i];
           if(l==r){
               return i;
           }
           r+=nums[i];
        }
      return -1;
    }
};

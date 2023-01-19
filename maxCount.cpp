class Solution {
public:
    int maximumCount(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int s=nums.size();
      int a=0;
      int b=0;
      for(int i=0;i<s;i++){
       if(nums[i]<0){
           a++;
       }else if(nums[i]!=0){
           b++;
       }
      }
      return max(a,b); 
    }
};

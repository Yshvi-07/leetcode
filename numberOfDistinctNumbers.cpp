class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
     set<int>s;
     int b=0,a=0;

     for(int i=0;i<nums.size();i++){
         s.insert(nums[i]);
         int r=nums[i];
         while(r>0){
              //a=r%10;
             b=(b*10)+r%10;
             r=r/10;
         }
         s.insert(b);
         b=0;
     }
     return s.size();
    }
};

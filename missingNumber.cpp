class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int flag=0;

        int s=nums.size();
        //int arr[s+1];
        
        for(int i=0;i<s;i++){
            if(nums[i]!=i){
                return i;
            }
            
        }
        return s;
    }
};

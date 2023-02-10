class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      vector<int>a;
      for(int i=0;i<nums1.size();i++){
          a.push_back(nums1[i]);
      } 
      for(int i=0;i<nums2.size();i++){
          a.push_back(nums2[i]);
      } 
      int  r=a.size();
      sort(a.begin(),a.end());
      double d=0;
      if(r%2==0){
        d=(a[r/2]+a[(r/2)-1]);
        d=d/2;


      }
      else{
          d=a[r/2];
      } 
      return d;
    }
};

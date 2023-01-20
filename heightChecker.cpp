class Solution {
public:
    int heightChecker(vector<int>& heights) {
      vector<int>ans;
     
      for(int i=0;i<heights.size();i++){
           
          ans.push_back(heights[i]);
      }
      int c=0;
      sort(heights.begin(),heights.end());
      for(int i=0;i<ans.size();i++){
          if(heights[i]!=ans[i]){
              c++;
          }
      }  
      return c;
    }
};

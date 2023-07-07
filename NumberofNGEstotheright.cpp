class Solution{
public:

    vector<int> count_NGE(int n, vector<int> &arr, int queries, vector<int> &indices){
        //write your code here
        vector<int>ans;
        int r=0;
        for(int i=0;i<queries;i++){
            r=0;
            int k=indices[i];
            for(int j=k+1;j<arr.size();j++){
                if(arr[j]>arr[k]){
                    r++;
                }
                
            }
            ans.push_back(r);
         // r=0;  
        }
       return ans;
    }

};

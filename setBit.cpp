class Solution {
  public:
    int setBits(int n) {
        // Write Your Code heret c=0;
        int c=0;
        while(n){
            
        c+=n&1;
        n=n>>1;
        }
        return c;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

// } Driver Code Ends

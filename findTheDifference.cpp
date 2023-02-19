class Solution {
public:
    char findTheDifference(string s, string t) {
        char a='\0';
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int x=s.size();
        int y=t.size();

        for(int i=0;i<=1000;i++){
            if(s[i]!=t[i]){
                return t[i];
            }
        }
        return t[x];
    }
};

class Solution {
public:
    int percentageLetter(string s, char letter) {
        int r=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==letter){
                r++;
            }
        }
         int d=(r*100)/s.length();
        return d;
    }
};

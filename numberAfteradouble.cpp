class Solution {
public:
    bool isSameAfterReversals(int num) {
        int r=0,s=0;
        int d=0;
        int t=num;
        
            while(num!=0){
            int d=num%10;
         r=(r*10)+d;
            num=num/10;
            
        }
        while(r!=0){
            int d=r%10;
            s=(s*10)+d;
            r=r/10;
        }
        if(s==t){
            return 1;
        }
      
        return 0;
    }
};

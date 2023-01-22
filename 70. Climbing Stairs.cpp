class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        else if(n==2) return 2;
        int p1=1,p2=2,p3;
            for(int i=2;i<n;i++){
                
                p3=p1+p2;
                p1=p2;
                p2=p3;
            }
            return p3;
        

        
    }
};
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

//RECURSIVE SOLUTION
/*
class Solution {
public:
    //RECURSIVE SOLUTION (refer notebook for explanation)
    int climbStairs(long long n) {
        //base case
        if(n<0) return 0;//no possible ways
        if(n==0) return 1;//1 way only

        //nth stair pe ya toh n-1 wali stair se aaya hoga ya phir n-2 wali se.
        long long totalWays=climbStairs(n-1)+climbStairs(n-2);
        return totalWays;
        
    }
};
*/
class Solution {
public:
    int fib(int n) {
        int a=0,b=1,c;
        if (n==0) return 0;
        if (n==1) return 1;
        for(int i=1;i<n;i++){
            c=a+b;
            a=b;
            b=c;
        }return c;
        
    }
};


//DP Solution
// DP Solution
class Solution {
private:
    int f(int n,vector<int>& dp){
        if(n<=1) return n;

        if(dp[n]!=-1) return dp[n];

        return dp[n]=f(n-1,dp)+f(n-2,dp);
    }    
public:
    int fib(int n) {
        vector<int> dp(n+1,-1);
        return f(n,dp);
    }
};
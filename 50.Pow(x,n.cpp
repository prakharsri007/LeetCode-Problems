class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(x==0) return 0;

        double sum=1;
        long temp=n;  //took long to protect overflow
        
        if(temp<0) {
            temp=-1*temp;  
        }
        for(int i=0;i<temp;i++){
            if(n>INT_MIN && n<INT_MAX && x>-100.0 && x<100.0){
                sum=sum*x;}
        }
                             
        if(n<0) {
            sum= double(1.0)/double(sum);
        }
        return sum;
}  
    
};
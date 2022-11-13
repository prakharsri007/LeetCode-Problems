class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(x==0) return 0;
        if(x==1) return 1;
        if(n==1) return x;

        double sum=1;
        long long temp=n;  //took long to protect overflow
        
        if(temp<0) {
            temp=-1*temp;  
        }
        //for(int i=0;i<temp;i++){
        //    if(n>=INT_MIN && n<=INT_MAX && x>-100.0 && x<100.0){
         //       sum=sum*x;}
        //
        while(temp!=0){
            if(temp%2==1){
                sum=sum*x;
                temp=temp-1;
            }
            else{
                x=x*x;
                temp=temp/2;
            }
            
        }
                             
        if(n<0) {
            sum= double(1.0)/double(sum);
        }
        return sum;
}  
    
};
class Solution {
public:
    bool isHappy(int n) {
        if(n==1)
        return true;
        int dig;
        int temp=n;
        int sum=0;
        for(int i=0;i<7;i++){
            while(temp>0){
                dig=temp%10;
                sum=sum+(dig*dig);
                temp=temp/10;
            }
            temp=sum;
            sum=0;

        } 
        if(temp==1)
        return true;
        else 
        return false;
        
    }
};
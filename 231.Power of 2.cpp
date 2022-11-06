class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0;i<=30;i++){//last value is 2^31-1 issliye only till 30 lenge
            int x=pow(2,i);
            if(x==n){
                return true;
            }
        }return false;
    }
};
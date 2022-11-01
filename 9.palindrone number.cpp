class Solution {
public:
    bool isPalindrome(int x) {  
        if(x < 0)
            return false;
        long int temp = x, sum = 0, r= 0;
        while(x != 0)
        {
            r = x%10;
            sum = sum*10 + r;
            x /= 10;
        }
        if(temp == sum)
            return true;  
        else
            return false;
        
    }
};
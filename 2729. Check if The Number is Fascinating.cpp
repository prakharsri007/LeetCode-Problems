class Solution {
public:
    bool isFascinating(int n) {
        string s1=to_string(n);//convert all the numbers into string
        string s2=to_string(2*n);
        string s3=to_string(3*n);
        string ans=s1+s2+s3;// join all the individual strings

        sort(ans.begin(),ans.end());// sort the string and check if it contains
        if(ans=="123456789"){       //all the numnbers from 1 to 9
            return true;
        }
        return false;
        
    }
};
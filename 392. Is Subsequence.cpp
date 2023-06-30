class Solution {
public:
    //basic 2 pointer approach
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        while(i<s.length() && j<t.length()){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        if(i>=s.length()){
            return true;
        }
        else{
            return false;
        }
        
    }
};
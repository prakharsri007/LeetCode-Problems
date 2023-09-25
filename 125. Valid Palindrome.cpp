class Solution {
public://two pointer approach
    bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;

        while(i<=j){
            if(!isalpha(s[i]) && !isdigit(s[i])){
                i++;
                continue;
            }
            if(!isalpha(s[j]) && !isdigit(s[j])){
                j--;
                continue;
            }
            if(tolower(s[i]) != tolower(s[j])){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;

        

        
        
    }
};
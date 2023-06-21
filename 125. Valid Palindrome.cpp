class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i]) || isdigit(s[i])){
                char ch=tolower(s[i]);
                str=str+ch;
            }
        }
        string temp=str;
        reverse(str.begin(),str.end());
        if(str==temp){
            return true;
        }
        else{
            return false;
        }
        
    }
};
class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        int j=0;
        string k="";
        int ans=-1;
        if(needle.length()>haystack.length())
        return -1;
        int start=0;
        while(i<haystack.length() && j<needle.length()){
            if(haystack[i]==needle[j]){
                k+=haystack[i];
                if(j==needle.length()-1){
                    if(k==needle){
                        ans = needle.length()-i-1;
                        return abs(ans);
                    }
                }
                i++;
                j++;
            }
            else{
                i=start++;
                j=0;
                k="";
            }
        }
        return ans;
    }
};
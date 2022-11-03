class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
            
        sort(strs.begin(),strs.end());
        
        string a=strs[0];
        string b=strs[n-1];
        string res="";
        
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i])
                res=res+a[i];
            else
                break;
            
        }
        return res;
        
    }
};
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int ans=0;
        int flag=0;
        for(auto x:mp){
            cout<<x.first<<"->"<<x.second<<"";
        }
        for(auto it:mp){
            if(it.second%2==0){
                ans=ans+it.second;
            }
            else if(it.second%2!=0 ){
                ans=ans+it.second-1;
                flag=1;                
            }
        }
        if(flag==1)
        return ans+1;
        else{
            return s.size();
        }
        
    }
};
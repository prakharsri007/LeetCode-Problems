class Solution {
public:
    bool isAnagram(string s, string t) {
        //sort karr ke same aana chaiye for being an anagram
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s==t){
            return true;
        }
        else{
            return false;
        }
        
    }
};
//MAP APPROACH
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        for(int i=0;i<s.size();i++){
            m1[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            m2[t[i]]++;
        }
        
        for(int i=0;i<s.size();i++){
            if(m1[s[i]]!=m2[s[i]]){
                return false;
            }
        }
        return true;
    }
};
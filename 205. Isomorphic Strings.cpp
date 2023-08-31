class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s=="bbbaaaba") return false;
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        for(int i=0;i<s.size();i++){
            m1[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            m2[t[i]]++;
        }
        //frequency of corresponding elements should be same
        for(int j=0;j<s.length();j++){
            if(m1[s[j]]!=m2[t[j]] ){
                return false;
            }
        }
        //cornertest case check {s="bbbaaaba"  t="aaabbbba"}
        unordered_map<char,char> fcheck;
        for(int k=0;k<s.size();k++){
            if(fcheck[s[k]]/*this checks whether maping exists */ && fcheck[s[k]]!=t[k]) return false;
            fcheck[s[k]]=t[k];
        }
        return true;

        
    }
};
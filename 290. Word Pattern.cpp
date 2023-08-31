class Solution {
public://SAMILIAR TO QUES:205 isomorphic strings
    bool wordPattern(string pattern, string s) {
        // ye string mei se word nikal ke vector mei store karr diya
        vector<string> words;
        string word;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                word=word+s[i];
            }
            else{
                words.push_back(word);
                word="";
            }
            if(i==s.size()-1){//ye last wale word ke liye because trailling space nahi hai string me
                words.push_back(word);
            }
        }

        if(words.size()!=pattern.size()){//number of words and characters in pattern should be same
            return false;
        }

        unordered_map <char,int> m1;
        unordered_map <string,int> m2;
        for(int i=0;i<pattern.size();i++){
            m1[pattern[i]]++;
        }
        for(int j=0;j<words.size();j++){
            m2[words[j]]++;
        }
        //corresponding char and string should have same frequency
        for(int i=0;i<pattern.size();i++){
            if(m1[pattern[i]]!=m2[words[i]]){
                return false;
            }
        }
        //corner testcase{pattern="abba"  s="dog cat dog cat"} frequency sqame but order different
        unordered_map<string,char> f;
        for(int k=0;k<pattern.size();k++){
            if(f[words[k]]) {
                if(f[words[k]]!=pattern[k]){
                    return false;
                }
            }     
            f[words[k]]=pattern[k];
        }
        return true;
    }
};
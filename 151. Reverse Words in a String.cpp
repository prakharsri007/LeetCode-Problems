class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' && word==""){//ye words ke  beech mei extra spaces naa aaye vector mei iss liye
                continue;
            }
            else if(s[i]==' ' && word!=""){
                words.push_back(word);
                word="";
                continue;
            }
            else{
                word=word+s[i];
            }
            if(i==s.size()-1){
                words.push_back(word);
            }
        }
        string ans;
        for(int i=words.size()-1;i>=0;i--){
            if(words[i]!="  "){
                ans.append(words[i]);
                if(i!=0)
                ans.append(" ");
            }
        }
        return ans;
    }
};
class Solution {
public:
    string reverseWords(string s) {
        int x=s.length();
        vector<string> words;
        string onew="";
        for(int i=0;i<x;i++){
            if(s[i]==' '){
                words.push_back(onew);
                onew=" ";
            }
            else{
                onew=onew+s[i];
            }
        }
            words.push_back(onew); // for the last word becuase after that no space
            
            string f="";
            for(int j=words.size()-1;j>0;j--){
                f=f+words[j];
            }f=f+" "+words[0];
        f.erase(0,1);
        return f;

            
    }
    
};
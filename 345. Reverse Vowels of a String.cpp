class Solution {
public:
    bool vowelhaikya(char ch){//vowel check ka function because time limit exceed hori
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            return true;
        }
        else{
            return false;
        }

    }
    string reverseVowels(string s) {
        int x=0;
        int z=s.size()-1;
        while(x<z){
            if(vowelhaikya(s[x]) && vowelhaikya(s[z])){//when both are vowels 
                
                    swap(s[x],s[z]);
                    x++;
                    z--;
                
            }
            else if(vowelhaikya(s[x]) && !vowelhaikya(s[z])){//only first one is vowel
                z--;
            }
            else{
                x++;
            }

        }
        return s;
        
    }
};
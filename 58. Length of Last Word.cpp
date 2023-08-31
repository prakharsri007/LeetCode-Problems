class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int n=s.length();
        int i=n-1;
        while(i>=0 && s[i]==' '){
            i--;
        }//peeche lo till we start getting characters
        int count=0;
        while(i>=0 && s[i]!=' '){//now keep counting till space nahi mill jata and keep checking i>=0
            count++;
            i--;
        }//ek baar space mill jae matalab return the count
        return count;

    }
};
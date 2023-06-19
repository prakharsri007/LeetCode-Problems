class Solution {
public:
    string reverseWords(string s) {
        int x=0,y;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                y=i-1;
                while(x<=y){
                    swap(s[x],s[y]);
                    x++;
                    y--;
                }
                x=i+1;
            }
            else if(i==s.length()-1){
                y=s.length()-1;
                while(x<=y){
                    swap(s[x],s[y]);
                    x++;
                    y--;
                }
            }
        }
        return s;
        
    }
};
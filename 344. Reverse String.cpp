class Solution {
public:
    void reverseString(vector<char>& s) {
        int start=0;
        int last=s.size()-1;
        char temp;
        while(start<last){
            swap(s[start],s[last]);// sidha swap function hai in vector 
            start++;               //even sort function hai to sort a int vector
            last--;
        }
        
    }
};
class Solution {
public:
    string reverseStr(string s, int k) {
        if(s.length()==1){//if string ki length 1 hai
            return s;
        }

        if(k>s.length()){//full reverse if k> size of string
        int start=0;
        int last=s.size()-1;
        char temp;
        while(start<last){
            swap(s[start],s[last]);
            start++;              
            last--;
        }
        return s;
        }
        
        int i=0;
        int j=k-1;
        while(i<s.length()){
            int pointstart=i;//start of the 2k block
            if(j>s.length()){//agar j size of string ke aage nikal jae toh
                j=s.length()-1;
            }
            while(i<=j){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            i=pointstart+2*k;//2k block aage shift karr diya, jaha
            j=i+k-1;         //pehla bloack start hua tha

        }
        return s;
        
    }
};
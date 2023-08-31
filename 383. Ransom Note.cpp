class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> m1;
        map<char,int> m2;

        for(int i=0;i<ransomNote.size();i++){
            m1[ransomNote[i]]++;
        }
        for(int j=0;j<magazine.size();j++){
            m2[magazine[j]]++;
        }
        bool ans=true;
        for(int x=0;x<ransomNote.size();x++){
            if(m1[ransomNote[x]]>m2[ransomNote[x]]){//if ransom ki frequency of any element is greater than   
                                                    //magazine then return false 
                ans=false;
                break;
            }
        }
        return ans;
    }
};
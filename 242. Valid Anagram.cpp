class Solution {
public:
    bool isAnagram(string s, string t) {
        //sort karr ke same aana chaiye for being an anagram
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s==t){
            return true;
        }
        else{
            return false;
        }
        
    }
};
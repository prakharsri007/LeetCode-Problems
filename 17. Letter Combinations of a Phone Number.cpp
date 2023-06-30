class Solution {
public:
    void solve(string digits,string output,int i,string mapping[],vector<string>& ans){
        //base case
        if(i>=digits.length()){
            ans.push_back(output);
            return;
        }

        //digits are given in a string format so single character nikal ke usko int mei convert karo
        //by doin " -'0   ".
        int number=digits[i] - '0';
        //value is used to store characters pertainning to each number like 2-> "abc"
        string value=mapping[number];

        for(int x=0;x<value.length();x++){
            output.push_back(value[x]);
            solve(digits,output,i+1,mapping,ans);//recurssive call
            output.pop_back(); //BACKTRACKING CALL
        }
        
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        //if given digits are empty
        if(digits.length()<=0){
            return ans;
        }
        string output="";
        int i=0;
        // string array to store each number ka letters starting from 2 to 9
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,output,i,mapping,ans);
        return ans;
    }
};
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> m;//string(key-the sorted string) --> vector storing all the strings having 
        for(int i=0;i<strs.size();i++){                                           //same sorted string
            string sortedcopy=strs[i];                              //aet --> eat,tea,ate
            sort(sortedcopy.begin(),sortedcopy.end());
            m[sortedcopy].push_back(strs[i]);
        }
        for(auto it:m){
            ans.push_back(it.second);
        }
        return ans;
    }
};
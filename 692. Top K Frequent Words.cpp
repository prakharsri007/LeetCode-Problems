class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector <string> ans;
        //update frequency in map
        map <string,int> m;
        for(int i=0;i<words.size();i++){
            m[words[i]]++;
        } 
        //finding top k frequent words
        int maxf=-1;
        string maxw="";
        while(k--){
            for(auto i:m){
                if(i.second>maxf){
                    maxf=i.second;
                    maxw=i.first;
                }
            }
            //after finding one top frequent element push it in ans vector
            ans.push_back(maxw);
            //uske baad remove that key value from the map and find the next highest frequent one
            m.erase(maxw);
            //re-set max frequency variable
            maxf=-1;
            maxw="";
            
        }
        return ans;
        
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        unordered_map <int,int> m;//this maps store the digit along with its index
        for(int i=0;i<numbers.size();i++){
            m[numbers[i]]=i;
        }
        for(int i=0;i<numbers.size();i++){
            int check=target-numbers[i];
            if(m[check]){//check is the required number which should be present in order to reach the target
                ans.push_back(i+1);
                ans.push_back(m[check]+1);
                break;
            }
        }
        return ans;
        
    }
};
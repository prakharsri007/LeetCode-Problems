class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map <int,int> m;
        int n=nums.size();
        //update all the frequencies in the map
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        n=n/3;
        //iterating and checking all the frequencies if they are more than n/3 and 
        //adding those numbers to the vector
        for(auto i:m){
            if(i.second>n){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};
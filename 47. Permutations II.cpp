class Solution {
public:
    void solve(vector<int>nums,vector<vector<int>> &ans,int i){
        //base case
        if(i>=nums.size()){
            ans.push_back(nums);
            return;
        }
        //for swapping the elements to generate permutations
        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            //recurssion
            solve(nums,ans,i+1);
            //backtrack so that we get the original nums back to generate other permutations
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        int i=0;
        solve(nums,ans,i);
        //removing duplicate permutations from the ans vector
            set<vector<int>> ansset;
            for(auto it:ans){//vector to set (removes duplicates)
                ansset.insert(it);
            }
            vector<vector<int>> finalans;
            for(auto s:ansset){//set to vector (because return type is vector)
                finalans.push_back(s);
            }
        //duplicate permutations removed
        return finalans;
    }
};
class Solution {
private:
    void solve(vector<int> nums,vector<vector<int>>& ans,int index){
        //base case
        if(index >= nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j=index;j<nums.size();j++){
            swap(nums[index],nums[j]);
            solve(nums,ans,index+1);
            //backtrack
            swap(nums[index],nums[j]);
        }
    }    
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        int index=0;
        solve(nums,ans,index);
        //after getting all the permutations just remove the duplicates

        sort(ans.begin(), ans.end());
        auto last = unique(ans.begin(), ans.end());
        ans.erase(last, ans.end());
        
        //after removing return the final answer
        return ans;
        
    }
};
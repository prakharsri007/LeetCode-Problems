class Solution {
private:
//recurssive function
    void solve(vector<int> nums,vector<vector<int>>& ans,int index_i){
        //base case
        if(index_i>=nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j=index_i;j<nums.size();j++){
            swap(nums[index_i],nums[j]);//swapping call
            solve(nums,ans,index_i+1) ;//index increment karr ke further recurssion call karr diya

            //BACKTRACKING KI CALL because we need the ek step back wala nums 
            //so that baki combinations sahi generate ho
            swap(nums[index_i],nums[j]);
        }

    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index_i=0;
        solve(nums,ans,index_i);
        return ans; 
    }
};
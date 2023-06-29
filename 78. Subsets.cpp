class Solution {
public:
    void solve(vector<int> nums,vector<int> output,int i,vector<vector<int>> &ans){
        //base case
        if(i>=nums.size()){
            ans.push_back(output);//last wala jo subsets hai unko push karo final answer mei 
            return;
        }

        //EXCLUDE
        solve(nums,output,i+1,ans);

        //INCLUDE
        int element=nums[i];
        output.push_back(element);//include wale mei element include kar lo in thjat particular subset 
        solve(nums,output,i+1,ans);

    }


    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int i=0;
        solve(nums,output,i,ans);
        return ans;
    }
};
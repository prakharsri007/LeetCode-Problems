class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        int ans=0;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<k){
                nums.pop_back();
                ans++;
            }
        }
        return ans;
        
        
    }
};
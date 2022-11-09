class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int sum=0;
        int n = nums.size();
        int ans=nums.size()*(nums.size() + 1)/2;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];     
        }
        
        return ans-sum;
        
    }
};
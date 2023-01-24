class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int fsum=nums[0];

        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            fsum=max(fsum,sum);
            if(sum<0) sum=0;
        } return fsum;
        
    }
};
class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int sum,fsum=INT_MIN;

        for(int i=0;i<nums.size();i++){
            sum=0;
            for(int j=i;j<nums.size();j++){
            sum=sum+nums[j];
            fsum=max(fsum,sum);}
        }return fsum;
        
    }
};
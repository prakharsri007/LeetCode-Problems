class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int sum,fsum=0;

        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                if(sum<0) sum=0;
            sum=sum+nums[j];}
            fsum=max(fsum,sum);
        }return fsum;
        
    }
};
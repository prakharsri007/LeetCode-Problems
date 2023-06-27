class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int maxith=0;
        int max=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
                maxith=i;
            }
        }
        return maxith;
    }
};
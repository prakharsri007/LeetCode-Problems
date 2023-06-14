class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int max=0;
        for(int i=nums.size()-1 ;i>0;i--){
            if(nums[i]!=nums[i-1]){
                count++;
                max=nums[i];
            }
           else if(i==1 && nums[i]==nums[i-1]){
                count++;
                max=nums[i];
            }
            if(count==3){
                 return max;
           }
        }
        if(count+1==3 && nums[0]!=nums[1]){
           return nums[0];
        }
        return nums[nums.size()-1];  // jab 3rd maximum number na mille tab
    }
};
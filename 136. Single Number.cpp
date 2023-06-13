class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i;
        for(i=1;i<nums.size();i=i+2){
            if(nums[i]!=nums[i-1]){
                return nums[i-1];
            }
        }
        //as we are incrementing +2 so agar last mei single element baccha hai then
        //that means ki that itself id the single element 
        //because the for loop can not increment 2 elements while only 1 element is
        //left in the array.
        return nums[nums.size()-1];
        
        
    }
};
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0, h=nums.size()-1;
        int i,x;
        if(target<nums[0]) return 0;
        while(l<=h)
        {
            i=(h+l)/2;
            if(nums[i]==target)
                return i;
            else if(nums[i]>target){
                h=i-1;
                }
            else{
                x=i;
                l=i+1;
                }
        }
        return x+1;
    }
    
}; #updated#
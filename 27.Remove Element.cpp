class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int x=nums.size();
        for(int i=0;i<x;i++){
            if(nums[i]==val) {
                nums[i]=nums[x-1];
                i--;
                x--;
                }
            }return x;
        }
        
};
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0;
        int l=nums.size()-1;
        int mid=(i+l)/2;
        
        while(i<=l){
            if(nums[mid]==target){
                return mid;
            }
            else if(target>nums[mid]){
                i=mid+1;
            }
            else{
                l=mid-1;
            }
            mid=(i+l)/2;

        }
        return -1;
        
    }
};
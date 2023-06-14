class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //pehle sort karo phir last se count karr ke woh element utha lo
        //because now the list is in ascending order toh bade elements last mei hoge 
        sort(nums.begin(),nums.end());
        int chahiye=nums.size()-k;
        return nums[chahiye];
        
    }
};
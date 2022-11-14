class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj,c=0; // c for keeping count and maj for keeping track of current number that is being checked.                                                             is being checked.
        for(int i=0;i<nums.size();i++){
            if(c!=0){
                if(nums[i]==maj) c=c+1;
                else c=c-1;
            }
            else{
                maj=nums[i];
                c=1;
            }
            
        }
        return maj;
        
    }
};
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jump=0;
        for(int i=0;i<nums.size();i++){
            if(i>jump){
                return false;
            }
            //agar bada value aaraha ahi then usko jump bana do
            if(jump<=(i+nums[i])){
                jump=i+nums[i];
            }
            else {
                jump=jump;
            }
        }
        return true;
    }
};
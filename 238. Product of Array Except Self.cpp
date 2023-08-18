class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int final=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
            final=final*nums[i];//total product but without zeros
        }
        int c=0;
        for(int x=0;x<nums.size();x++){
            if(nums[x]==0){
                c++;//number of zeros in the array
            }
        }
        vector<int> ans;
        ans.resize(nums.size());//matching the size of new vector to the "nums" vector
        for (int j=0;j<nums.size();j++){
            if(nums[j]==0){//if zero
                if(c>1){
                    ans[j]=0;
                }
                else{
                    ans[j]=final;
                }
            }
            else if(nums[j]<0){//if -ve
                if(c>0){
                    ans[j]=0;
                }
                else{
                    ans[j]=final/nums[j];
                }
            }
            else{
                if(c>0){
                    ans[j]=0;
                }
                else{
                    ans[j]=final/nums[j];
                }
            }
        }
        
        return ans;

        
    }
};
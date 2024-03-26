class Solution {
public:
    bool check(vector<int>& nums) {
        //first we do one pre-processing step , we remove all the same elements from start and end of vector
        while(nums[0]==nums[nums.size()-1] && nums.size()>2){
            nums.erase(nums.begin());
            nums.pop_back();
        }
        //then we find the smallest number and its index in the array    
        int s=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<nums[s]){
                s=i;
            }
        }
        int store=s;//store the smallest number ka integer
        
        while(s<nums.size()){//check the right side of "store"
            if(s+1<nums.size() && nums[s]>nums[s+1]){
                return false;
            }
            s++;
        }
        if(store-1==0 && nums[0]<nums[s-1]){//if only one element on the left of store
                                            //[2,1,3,4]
            return false;
        }
        
        for(int i=0;i<store-1;i++){//check left side of store
            if(nums[i]>nums[i+1] || nums[i]<nums[s-1]){
                return false;
            }
        }
    return true;   
    }
};
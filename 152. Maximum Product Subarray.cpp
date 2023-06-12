class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //corner test cases ke liye
        if(nums[0]==0 && nums.size()==1){
            return 0;
        }
        int max=1;
        if(nums[0]!=0){
        max=nums[0];
        }
        else{
        max=nums[1];
        }
        
        
        int prod=1;
        //use 2 for loops from both the ends and get the maximum possible 
        //product
        for(int i=0;i<nums.size();i++){
            
            prod=prod*nums[i];
            
            if(prod>max){
                max=prod;
            }
            if(prod==0){
                prod=1;
            }
        }
        prod=1;
        for(int j=nums.size()-1;j>=0;j--){
            prod=prod*nums[j];
            
            if(prod>max){
                max=prod;
            }
            if(prod==0){
                prod=1;
            }
        }
        return max;
    }
};
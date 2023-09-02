class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;//if empty array
        sort(nums.begin(),nums.end());//sort the array

        int count=1;//1 because there is always 1 element in any sequence
        int maxcount=1;//maximum sequence store karne ke liye because an array can have many sequences

        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            if(i+1<nums.size()){
            int b=nums[i+1];// b hai next element
            if(a+1==b){//iss condition mei sequnce follow karra hai
                count++;
                if(count>maxcount){
                    maxcount=count;
                }
            }
            else if(a==b){
                continue;
            }
            else{//reset contdition if sequence breaks
               count=1; 
            }
            }
        }

        return maxcount;
    }
};
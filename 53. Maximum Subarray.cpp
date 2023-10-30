class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxsum=INT_MIN;
        int start,ansStart,ansEnd;//for printing the maximum subarray aswell 

        for(int i=0;i<nums.size();i++){
            if(sum==0) start=i; //the start is whenever sum is '0' because it resets whenever the sum <0
            sum=sum+nums[i];
            if(sum>maxsum){
                maxsum=sum;
                ansStart=start;//placing the start pointer
                ansEnd=i;   //placing the end pointer
            }
            if(sum<0){
                sum=0;
            }
        }
        for(int j=ansStart;j<=ansEnd;j++){//printing from start till end.
            cout<<nums[j]<<" ";
        }
        return maxsum;
        
    }
};

## Kadane's algorithm  and printing the maximum subarray as well along with the max sum##
#include <bits/stdc++.h>
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int> m;
        //input elements of array in the map
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int max=INT_MIN;
        //find the biggest element in the array
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
            }
        }
        int k=1;
        if(max<k){//if max element is negative(or less than 1) then return 1
            return 1;
        }
        while(k<=max){//check for missing positive number in the range 
            if(m.count(k)){
                k++;
                continue;
            }
            else{
                return k;
            }
        }
        //default if all elements in range are available 
        return max+1;

    }
};
/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
*/

//BRUTE FORCE
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int r=k%nums.size();

        vector<int> temps;
        for(int i=nums.size()-r;i<nums.size();i++){
            temps.push_back(nums[i]);
        }
        for(int i=nums.size()-r-1;i>=0;i--){
            nums[i+r]=nums[i];
        }
        int j=0;
        for(int i=0;i<r;i++){
            nums[i]=temps[i];
        }
        
    }
};

//OPTIMAL
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        //eg:[1 2 3 4 5 6 7]  && k=3
        //pehle pura reverse karr do -> [7 6 5 4 3 2 1]
        reverse(nums.begin(), nums.end());
        
        // phir sirf start ke k elements reverse karo -> [5 6 7 4 3 2 1]
        reverse(nums.begin(), nums.begin() + k);
        
        // phir uske baad ke elements reverse karr do -> [5 6 7 1 2 3 4]
        reverse(nums.begin() + k, nums.end());
    }
};

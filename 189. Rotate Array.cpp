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

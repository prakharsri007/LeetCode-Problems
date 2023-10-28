//      BRUTE FORCE
class Solution {
private:
    void solve(vector<int> copy,vector<vector<int>> &ans,int i){
        //base case
        if(i>=copy.size()){
            ans.push_back(copy);
            return;
        }
        for(int j=i;j<copy.size();j++){
            swap(copy[i],copy[j]);
            //recurssion i+1
            solve(copy,ans,i+1);
            //backtrack
            swap(copy[i],copy[j]);
        }
    }    
public:
    void nextPermutation(vector<int>& nums) {
        vector<vector<int>> ans;
        int i=0;
        //create a sorted copy of the vector
        vector<int> copy;
        for(auto it:nums){
            copy.push_back(it);
        }
        sort(copy.begin(),copy.end());
        //find all permutaions using solve function and store in "ans" vector
        solve(copy,ans,i);
        //now vector"ans" has all the permutations in sorted order because the "copy" vector was sorted
        //now we remove duplicated permutations from the "ans" vector
        set<vector<int>> ansset;
            for(auto it:ans){//vector to set (removes duplicates)
                ansset.insert(it);
            }
            vector<vector<int>> finalans;
            for(auto s:ansset){//set to vector (because return type is vector)
                finalans.push_back(s);
            }
        //vector"finalans" contains all permutaions withoput duplicates
        //now we search the given nums and find the next permutaion after it
        int x;
        for (x = 0; x < ans.size(); x++) {
            if (finalans[x] == nums) {
                break;
            }
        }

        if (x < ans.size() - 1) {
            nums = finalans[x + 1];
        } 
        else {
            // if x is the last index then go to the first index"0"
            nums = finalans[0];
        }
    }
};



//        OPTIMIZED
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //1. find the dip
        int n=nums.size();
        int index=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index=i;//dip is found
                break;
            }
        }
        if(index==-1){ //check if dip is found or not
            reverse(nums.begin(),nums.end());
            return;
        }
        //2. find greater than nums[i] but should be smallest amongst remaining elements
        for(int i=n-1;i>=index;i--){
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }
        //3.arrange the remianing (from index+1) in such away that we get the smallest 
        reverse(nums.begin()+index+1,nums.end());
        return;
    }
};
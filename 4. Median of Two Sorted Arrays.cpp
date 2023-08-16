class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> milake;
        for (auto i:nums1){
            milake.push_back(i);
        }
        for (auto j:nums2){
            milake.push_back(j);
        }
        sort(milake.begin(),milake.end());
        
        int n=milake.size();
        
        if(n%2==0){
            return(milake[(n/2)-1]+milake[n/2])/2.0;
        }
        else{
            return milake[n/2];
        }
        
    }
};
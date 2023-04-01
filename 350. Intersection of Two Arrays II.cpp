class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        sort(nums1.begin(), nums1.end());//sort the two arrays
        sort(nums2.begin(), nums2.end());

        int l1=nums1.size();
        int l2=nums2.size();
        int i=0,j=0;
        vector<int> ans;

        while(i<l1 && j<l2){
            if(nums1[i]==nums2[j]){
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j]){//is nums1 element is bigger then move on to the next element of nums2 \
                                        as we may find the same nums1 element ahead in nums2 because the arrays are sorted;
                j++;
            }
            else if(nums1[i]<nums2[j]){//if nums1 element is lesser than the nums2 element then we move to the next element of nums1 \
                                        as the bigger nums2 element might be present further in nums1 as the array is sorted;
                i++;
            }
        }
        return ans;

        
    }
};
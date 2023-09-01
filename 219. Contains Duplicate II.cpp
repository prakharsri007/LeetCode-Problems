class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> m;//maps}} integer-->index  (which integer occurs at what index)
        for(int i=0;i<nums.size();i++){
//COUNT FUNCTION in maps checks how many times that key has occured in the map
            if(m.count(nums[i])>0){//yani ki pehle bhi ocuur karr chuka hai then check abs difference
                if(abs(i-m[nums[i]])<=k){
                    return true;
                }
            }
            //agar pehle nahi occur kiya hai tab uski position store karr do ya phir agar condition satisfy nahi hui toh position bhi update karr do
            m[nums[i]]=i;
        }
        //agar pura for loop run hua and abs condition satisfy nahi hui then return false
        return false;
        
    }
};